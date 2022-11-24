#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int a[200004];
int b[200004];
int t[200004];
int T;
int N;
bool op = false; // 참 : 이미 제외,  거짓: 아직 제외 X
int max;

int left(int idx, int max, bool op);
int right(int idx, int max, bool op);

int main()
{
	scanf("%d", &T);

	for (int cnt = 0; cnt < T; cnt++) {
		scanf("%d", &N);

		//a = (int*)malloc(sizeof(int) * N);
		//b = (int*)malloc(sizeof(int) * N);

		//memset(a, 0, sizeof(int) * N);
		//memset(b, 0, sizeof(int) * N);

		for (int i = 0; i < N; i++) {
			scanf("%d", &a[i]);
		}

		if (N == 1) {
			if (a[0] < 0) a[0] *= (-1);
			t[cnt] = a[0];
		}
		else {
			for (int i = 0; i < N; i++) {
				op = false;
				if (i == 0) {
					b[i] = a[i] + right(1, 0, op);
				}
				else if (i == N - 1) {
					b[i] = a[i] + left(i - 1, 0, op);
				}
				else {
					int tmp_max = left(i - 1, 0, op);
					int max = right(i + 1, tmp_max, op) + tmp_max;
					b[i] = a[i] + max;
				}
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

int left(int idx, int max, bool op)
{
	if (idx == 0) {
		if (a[idx] >= 0) {
			return a[idx];
		}
		else if (a[idx] < 0) {
			return 0;
		}
	}

	//양수인 경우
	if (a[idx] >= 0) {
		return left(idx - 1, max + a[idx], op) + a[idx];
	}
	//음수인 경우
	else if (a[idx] < 0) {
		if (op) {	// 이미 제외 한 경우
			int tmp1 = left(idx - 1, max + a[idx], op) + a[idx];
			if (max < tmp1) {
				return tmp1;
			}
			else if (max >= tmp1) {
				return 0;
			}
		}
		else if (!op) {		// 아직 제외하지 않은 경우
			int tmp1 = left(idx - 1, max + a[idx], op) + a[idx];	//본인 제외 X
			int tmp2 = left(idx - 1, max, false);
			if (tmp1 >= tmp2) return tmp1;
			else if (tmp1 < tmp2) return tmp2;
		}
	}
}

int right(int idx, int max, bool op)
{
	if (idx == N-1) {
		if (a[idx] >= 0) {
			return a[idx];
		}
		else if (a[idx] < 0) {
			return 0;
		}
	}

	//양수인 경우
	if (a[idx] >= 0) {
		return right(idx + 1, max + a[idx], op) + a[idx];
	}
	//음수인 경우
	else if (a[idx] < 0) {
		if (op) {	// 이미 제외 한 경우
			int tmp1 = right(idx + 1, max + a[idx], op) + a[idx];
			if (max < tmp1) {
				return tmp1;
			}
			else if (max >= tmp1) {
				return 0;
			}
		}
		else if (!op) {		// 아직 제외하지 않은 경우
			int tmp1 = right(idx + 1, max + a[idx], op) + a[idx];	//본인 제외 X
			int tmp2 = right(idx + 1, max, false);
			if (tmp1 >= tmp2) return tmp1;
			else if (tmp1 < tmp2) return tmp2;
		}
	}
}