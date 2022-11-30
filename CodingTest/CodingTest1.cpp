#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int a[200004];
int b[200004];
int t[200004];
int T;
int N;
bool isExcept = false;		// 참 : 이미 제외,  거짓: 아직 제외 X    // isExcept
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
				printf("%d 맥스 %d\n", i, b[i]);
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
	//인덱스 0 경계
	if (idx == 0) {
		if (a[idx] >= 0) {
			max += a[idx];
			if (startIdx == N - 1) return a[idx];
			return a[idx] + Calculation(startIdx + 1, max, right, isExcept);
		}
		else if (a[idx] < 0) { //음수를 만나면 제외할지 말지 결정해야 하지만, 왼쪽 끝이기 때문에 건너 뜀.
			if (startIdx == N - 1) return 0;
			return 0 + Calculation(startIdx + 1, max, right, isExcept);
		}
	}
	//인덱스 오른쪽 끝 경계
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
			if (isExcept) {	//이미 제외 한 경우
				int tmp = a[idx] + Calculation(idx - 1, max + a[idx], left, isExcept);
				return max < tmp ? tmp : 0;
			}
			else if (!isExcept) { //아직 제외하지 않은 경우
				// 현재 인덱스 값 제외 x
				int tmp1 = a[idx] + Calculation(idx - 1, max, left, isExcept);
				// 현재 인덱스 값 제외 o
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
			if (isExcept) {	//이미 제외 한 경우
				int tmp = a[idx] + Calculation(idx + 1, max + a[idx], right, isExcept);
				return max < tmp ? tmp : 0;
			}
			else if (!isExcept) { //아직 제외하지 않은 경우
				// 현재 인덱스 값 제외 x
				int tmp1 = a[idx] + Calculation(idx + 1, max, right, isExcept);
				// 현재 인덱스 값 제외 o
				int tmp2 = Calculation(idx + 1, max, right, true);
				return tmp1 > tmp2 ? tmp1 : tmp2;
			}
		}
	}
}