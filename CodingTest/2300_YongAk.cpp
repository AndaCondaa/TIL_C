//2300: 용액

#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;

enum op {
	mix = 0,
	only_al = 1,	// 알칼리 음수
	only_san = 2	//산성 양수
};

int main()
{
	int N;
	//int* a;
	int op;
	int sanIdx;
	int min, max;
	int check = 210000000;
	int tmp_check;
	int x, y;
	vector<int> a;
	

	scanf("%d ", &N);

	//a = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		int tmp;
		scanf("%d", &tmp);
		a.push_back(tmp);
	}
	op = only_al;
	for (int i = 0; i < N; i++) {
		if (a[i] > 0) {
			sanIdx = i;
			op = mix;
			break;
		}
	}

	if (sanIdx == 0) {
		op = only_san;
	}

	switch (op)
	{
	case mix: {
		min = 0;
		max = N - 1;
		while (min != max) {
			tmp_check = a[min] + a[max];

			if (tmp_check == 0) {
				x = min;
				y = max;
				break;
			}
			if (tmp_check > 0) {
				if (tmp_check < check) {
					check = tmp_check;
					x = min;
					y = max;
				}
				max--;
			}
			else if (tmp_check < 0) {
				tmp_check *= (-1);
				if (tmp_check < check) {
					check = tmp_check;
					x = min;
					y = max;
				}
				min++;
			}
		}
		break;
	}
	case only_al: {
		x = N - 2;
		y = N - 1;
		break;
	}
	case only_san: {
		x = 0;
		y = 1;
		break;
	}
	}

	printf("%d %d", a[x], a[y]);
	return 0;
}