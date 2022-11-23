#include <stdio.h>
#include <string.h>


int N, M, K;
int a[104][104];
int sep_area[54];
int area_cnt = 0;
int area;
int tmp_area = 0;


int check(int x, int y, int &tmp_hori, int &tmp_verti)
{

	a[x][y] = 2;

	//오른쪽으로
	if (a[x + 1][y] == 0 && (x + 1) < N && y < M) {
		//a[x + 1][y] = 2;
		tmp_hori += check(x + 1, y, tmp_hori, tmp_verti);
	}
	if (a[x][y+1] == 0 && x < N && (y+1) < M) {
		//a[x][y + 1] = 2;
		tmp_verti += check(x, y + 1, tmp_hori, tmp_verti);
	}
	if (     (a[x+1][y] != 0  && a[x][y+1] != 0)   ||   (x+1 == N && y+1 == M)  ) {
		//a[x][y] = 2;
		return tmp_verti + tmp_hori + 1;
	}

	
	return tmp_hori + tmp_verti;
}

int main()
{
	int tmp_hori = 0;
	int tmp_verti = 0;
	memset(a, 0, sizeof(a[0][0]) * 104 * 104);
	memset(sep_area, 0, sizeof(sep_area[0]) * 54);
	scanf("%d %d %d", &M, &N, &K);
	area = M * N;
	for (int i = 0; i < K; i++) {
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", & x1, &y1, &x2, &y2);
		int h = y2 - y1;
		int s = x2 - x1;
		for (int j = 0; j < h; j++) {
			for (int k = 0; k < s; k++) {
				a[x1 + k][y1 + j] = -1;
			}
		}
	}
	printf("\n\n");

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (a[j][i] == 0) {
				sep_area[area_cnt] = check(j, i, tmp_hori, tmp_verti);
				area_cnt++;
			}
		}
	}
	
	printf("area_count : %d\n", area_cnt);
	printf("%d", sep_area[1]);

	return 0;
}