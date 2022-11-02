#include <iostream>


void call(int call, int chulsoo[5][5]);
bool bingoCheck(int chulsoo[5][5]);
int horizonCheck(int i, int chulsoo[5][5]);
int verticalCheck(int j, int chulsoo[5][5]);
int leftDaegakCheck(int chulsoo[5][5]);
int rightDaegakCheck(int chulsoo[5][5]);

int main()
{
	bool isEnd = false;

	int chulsoo[5][5];					//철수 배열
	int admin[25];						//사회자 배열

//입력 
	//철수 입력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &chulsoo[i][j]);
		}
	}
	//사회자 입력
	for (int i = 0; i < 25; i++){
		scanf("%d%*c", &admin[i]);
	}
	
//게임 시작
	//사회자 숫자 콜
	for (int i = 0; i < 25; i++) {
		call(admin[i], chulsoo);
		isEnd = bingoCheck(chulsoo);
		if (isEnd) {
			printf("%d", i+1);
			return 0;
		}
	}
	return 0;
}

void call(int call, int chulsoo[5][5])
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (call == chulsoo[i][j]) {
				chulsoo[i][j] = 0;
				return;
			}
		}
	}
}

int horizonCheck(int i, int chulsoo[5][5])
{
	for (int j = 0; j < 5; j++) {
		if (chulsoo[i][j] != 0) {
			return 0;
		}
	}
	return 1;
}

int verticalCheck(int j, int chulsoo[5][5])
{
	for (int i = 0; i < 5; i++) {
		if (chulsoo[i][j] != 0) {
			return 0;
		}
	}
	return 1;
}

int rightDaegakCheck(int chulsoo[5][5])
{
	int i = 0;
	int j = 0;

	for (int k = 0; k < 5; k++) {
		if (chulsoo[i][j] != 0) {
			return 0;
		}
		i++;
		j++;
	}
	return 1;
}

int leftDaegakCheck(int chulsoo[5][5])
{
	int i = 0;
	int j = 4;
	for (int k = 0; k < 5; k++) {
		if (chulsoo[i][j] != 0) {
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}

bool bingoCheck(int chulsoo[5][5])
{
	int sum = 0;

	//가로 체크
	for (int i = 0; i < 5; i++) {
		sum += horizonCheck(i, chulsoo);
		if (sum >= 3)
			return true;
	}

	//세로 체크
	for (int j = 0; j < 5; j++) {
		sum += verticalCheck(j, chulsoo);
		if (sum >= 3)
			return true;
	}

	//대각 체크
	sum += rightDaegakCheck(chulsoo);
	if (sum >= 3)
		return true;

	sum += leftDaegakCheck(chulsoo);
	if (sum >= 3)
		return true;

	return false;
}

