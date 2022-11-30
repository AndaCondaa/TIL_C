#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int a[200004];
int b[200004];
int t[200004];
int T;
int N;
bool isExcept = false;		// �� : �̹� ����,  ����: ���� ���� X    // isExcept
int max;
int direction;
int startIdx;

enum directionFlags {
	left,
	right
};

int Calculation(int idx, int max, int direction, bool isExcept);

int main()
{
	scanf("%d", &T);

	for (int cnt = 0; cnt < T; cnt++) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &a[i]);
		}
		
		if (N == 1) {
			if (a[0] < 0) a[0] *= (-1);
			t[cnt] = a[0];
		} 
		else {
			for (int i = 0; i < N; i++) {
				isExcept = false;
				startIdx = i;
				max = a[i];
				if (i == 0) {
					b[i] = a[i] + Calculation(i + 1, max, right, isExcept);
				}
				else {
					b[i] = a[i] + Calculation(i - 1, max, left, isExcept);
				}
				printf("%d �ƽ� %d\n", i, b[i]);
			}

			int result = 0;
			for (int i = 0; i < N; i++) {
				if (b[i] < 0) b[i] *= (-1);
				result += b[i];
			}
			t[cnt] = result;
		}
	}

	for (int i = 0; i < T; i++) {
		printf("#%d %d\n", i+1, t[i] % 1000000007);
	}

	return 0;
}

int Calculation(int idx, int max, int direction, bool isExcept)
{
	//�ε��� 0 ���
	if (idx == 0) {
		if (a[idx] >= 0) {
			max += a[idx];
			if (startIdx == N - 1) return a[idx];
			return a[idx] + Calculation(startIdx + 1, max, right, isExcept);
		}
		else if (a[idx] < 0) { //������ ������ �������� ���� �����ؾ� ������, ���� ���̱� ������ �ǳ� ��.
			if (startIdx == N - 1) return 0;
			return 0 + Calculation(startIdx + 1, max, right, isExcept);
		}
	}
	//�ε��� ������ �� ���
	else if (idx == N - 1) {
		if (a[idx] >= 0) {
			return a[idx];
		}
		else if (a[idx] < 0) {
			return 0;
		}
	}

	switch (direction)
	{
	case left:
		if (a[idx] >= 0) {
			max += a[idx];
			return a[idx] + Calculation(idx - 1, max, left, isExcept);
		}
		else if (a[idx] < 0) {
			if (isExcept) {	//�̹� ���� �� ���
				int tmp = a[idx] + Calculation(idx - 1, max + a[idx], left, isExcept);
				return max < tmp ? tmp : 0;
			}
			else if (!isExcept) { //���� �������� ���� ���
				// ���� �ε��� �� ���� x
				int tmp1 = a[idx] + Calculation(idx - 1, max, left, isExcept);
				// ���� �ε��� �� ���� o
				int tmp2 = Calculation(idx - 1, max, left, true);
				return tmp1 > tmp2 ? tmp1 : tmp2;
			}
		}
	case right:
		if (a[idx] >= 0) {
			max += a[idx];
			return a[idx] + Calculation(idx + 1, max, right, isExcept);
		}
		else if (a[idx] < 0) {
			if (isExcept) {	//�̹� ���� �� ���
				int tmp = a[idx] + Calculation(idx + 1, max + a[idx], right, isExcept);
				return max < tmp ? tmp : 0;
			}
			else if (!isExcept) { //���� �������� ���� ���
				// ���� �ε��� �� ���� x
				int tmp1 = a[idx] + Calculation(idx + 1, max, right, isExcept);
				// ���� �ε��� �� ���� o
				int tmp2 = Calculation(idx + 1, max, right, true);
				return tmp1 > tmp2 ? tmp1 : tmp2;
			}
		}
	}
}