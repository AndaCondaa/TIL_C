//2046:숫자사각형4
#include <stdio.h>

void Case1(int n);
void Case2(int n);
void Case3(int n);

int main()
{
	int n, m;
	scanf_s("%d%d", &n, &m);

	switch (m)
	{
	case 1: Case1(n); break;
	case 2:	Case2(n); break;
	case 3: Case3(n); break;
	}


	return 0;
}

void Case1(int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", i+1 );
		}
		printf("\n");
	}
}

void Case2(int n) {
	for (int i = 1; i <= n; i++)
	{
		if ((i % 2) == 1)
		{
			for (int j = 1; j <= n; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
		}
		else
		{
			for (int j = n; j >= 1; j--)
			{
				printf("%d ", j);
			}
			printf("\n");
		}
	}
}

void Case3(int n) {
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		for (int j = 0; j < n; j++)
		{
			count += (i + 1);
			printf("%d ", count);
		}
		printf("\n");
	}
}
