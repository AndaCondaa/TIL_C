#include <stdio.h>

int main()
{
	int M, N, count = 0;
	scanf("%d%d", &M, &N);


	for (int i = M; i <= N; i++)
	{
		count += prime(i);
	}

	printf("%d", count);
}

int prime(int n)
{
	if (n == 1) return 0;
	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}
