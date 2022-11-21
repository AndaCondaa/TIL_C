//3617: 최대직사각형

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int M, N;

	vector<int> xRed;
	vector<int> yRed;
	vector<int> xBlue;
	vector<int> yBlue;

	int max = 0;
	int tmp_max = 0;


	//cin >> M >> N;
	scanf("%d %d", &M, &N);

	for (int i = 0; i < M; i++) {
		int tmp_x;
		int tmp_y;
		scanf("%d %d", &tmp_x, &tmp_y);
		xRed.push_back(tmp_x);
		yRed.push_back(tmp_y);
	}
	for (int i = 0; i < N; i++) {
		int tmp_x;
		int tmp_y;
		scanf("%d %d", &tmp_x, &tmp_y);
		xBlue.push_back(tmp_x);
		yBlue.push_back(tmp_y);
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (xRed[i] < xBlue[j]) {
				if (yRed[i] < yBlue[j]) {
					tmp_max = (xBlue[j] - xRed[i]) * (yBlue[j] - yRed[j]);
					if (tmp_max > max) max = tmp_max;
				}
			}
		}
	}

	cout << max;
}