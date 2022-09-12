//1339:문자삼각형2
#include <stdio.h>
int main()
{
	int n, m, start;
	scanf("%d", &m);
	if ((m <= 0) || (m > 100) || (m % 2) == 0)
	{
		printf("INPUT ERROR");
		return 0;
	}


	n = (m + 1) / 2;
	
	for (int i = 1; i <= n; i++)
	{
		start = (n - 1) * (n - 1) + i;
		for (int j = 0; j < i; j++)
		{
			printf("%c ", (start-1)%26+65);
			start -= (n - j-1) * 2;
		}
		printf("\n");
	}
	for (int i = n+1; i <= 2*n-1; i++)
	{
		start = (n - 1) * (n - 1) + i;
		int op = 0;
		for (int j = i; j <= 2*n-1; j++)
		{
			printf("%c ", (start - 1) % 26 + 65);
			start -= (n - op - 1) * 2;
			op++;
		}
		printf("\n");
	}
	return 0;
}


