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

	int chulsoo[5][5];					//ö�� �迭
	int admin[25];						//��ȸ�� �迭

//�Է� 
	//ö�� �Է�
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &chulsoo[i][j]);
		}
	}
	//��ȸ�� �Է�
	for (int i = 0; i < 25; i++){
		scanf("%d%*c", &admin[i]);
	}
	
//���� ����
	//��ȸ�� ���� ��
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

	//���� üũ
	for (int i = 0; i < 5; i++) {
		sum += horizonCheck(i, chulsoo);
		if (sum >= 3)
			return true;
	}

	//���� üũ
	for (int j = 0; j < 5; j++) {
		sum += verticalCheck(j, chulsoo);
		if (sum >= 3)
			return true;
	}

	//�밢 üũ
	sum += rightDaegakCheck(chulsoo);
	if (sum >= 3)
		return true;

	sum += leftDaegakCheck(chulsoo);
	if (sum >= 3)
		return true;

	return false;
}

