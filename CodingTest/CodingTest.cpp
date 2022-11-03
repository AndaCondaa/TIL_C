#include <stdio.h>
#include <stdlib.h>

int select(int num, int arr[], int moveCard, int move, int tmpSum);

int main()
{
	int count;
	int N;
	int M;
	int moveCard;
	int* arr;
	int result[10] = { 100000, 100000, 100000, 100000, };
	
	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%d ", &N);
		scanf("%d ", &M);

		int num = (N - 1) * 4;
		arr = (int*)malloc(sizeof(int) * (num + 5));
		for (int i = 0; i < num; i++) {
			scanf("%d", &arr[i]);
		}
		for (int i = 0; i < 5; i++) {
			arr[num+i] = arr[i];
		}

		moveCard = M * 1 + M * 10 + M * 100 + M * 1000 + M * 10000 + M * 100000;

		result[i] = select(num, arr, moveCard, 0, 0);
	}
	for (int i = 0; i < count; i++) {
		printf("#%d %d\n", i + 1, result[i]);
	}

	return 0;
}

int select(int num, int arr[], int moveCard, int move, int tmpSum)
{
	if (move >= num) {
		return tmpSum * (-1);
	}

	int m_moveCard[6] = { moveCard, moveCard ,moveCard ,moveCard ,moveCard ,moveCard };
	int m_move[6] = { move, move, move, move, move, move };
	int m_tmpSum[6] = { tmpSum, tmpSum ,tmpSum ,tmpSum ,tmpSum ,tmpSum };
	int res[6];

	for (int i = 0; i < 6; i++) {
		switch (i) {
		case 0: {
			if ((m_moveCard[i] % 10) != 0) {
				m_moveCard[i] -= 1;
				m_move[i] += i + 1;
				m_tmpSum[i] += arr[m_move[i]];
				res[i] = select(num, arr, m_moveCard[i], m_move[i], m_tmpSum[i]);
			}
			break;
		}
		case 1: {
			if ((m_moveCard[i] % 100) >= 10) {
				m_moveCard[i] -= 10;
				m_move[i] += i + 1;
				m_tmpSum[i] += arr[move];
				res[i] = select(num, arr, m_moveCard[i], m_move[i], m_tmpSum[i]);
			}
			break;
		}
		case 2: {
			if ((m_moveCard[i] % 1000) >= 100) {
				m_moveCard[i] -= 100;
				m_move[i] += i + 1;
				m_tmpSum[i] += arr[move];
				res[i] = select(num, arr, m_moveCard[i], m_move[i], m_tmpSum[i]);
			}
			break;
		}
		case 3: {
			if ((m_moveCard[i] % 10000) >= 1000) {
				m_moveCard[i] -= 1000;
				m_move[i] += i + 1;
				m_tmpSum[i] += arr[move];
				res[i] = select(num, arr, m_moveCard[i], m_move[i], m_tmpSum[i]);
			}
			break;
		}
		case 4: {
			if ((m_moveCard[i] % 100000) >= 10000) {
				m_moveCard[i] -= 10000;
				m_move[i] += i + 1;
				m_tmpSum[i] += arr[move];
				res[i] = select(num, arr, m_moveCard[i], m_move[i], m_tmpSum[i]);
			}
			break;
		}
		case 5: {
			if ((m_moveCard[i] % 1000000) >= 100000) {
				m_moveCard[i] -= 100000;
				m_move[i] += i + 1;
				m_tmpSum[i] += arr[move];
				res[i] = select(num, arr, m_moveCard[i], m_move[i], m_tmpSum[i]);
			}
			break;
		}	//case 5
		}	//switch
	}	// for

	int tmp = -1000000000;
	for (int i = 0; i < 6; i++) {
		if (res[i] < 0) {
			if (tmp < res[i])
				tmp = res[i];
		}
	}
	return tmp;
}




/*
1
6 1
0 400 300 200 100 500 700 900 500 500 400 300 700 400 800 900 200 300 300 400
6 1
0 500 400 500 600 700 800 900 1000 600 400 300 700 1500 400 100 0 700 200 500
11 2
0 500 100 200 300 500 700 500 600 300 400 500 100 200 800 100 500 600 400 300 200 0 400 100 300 800 700 200 300 400 700 600 0 300 200 500 400 300 1000 2000
*/

/*
1
6 1
0 30 30 30 20 30 30 20 20 20 20 20 20 20 20 20 20 20 20 20 
*/