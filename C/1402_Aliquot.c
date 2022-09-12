//1402:약수 구하기
#include <stdio.h>
int main()
{
	int N, K, count=0, Ali;
	scanf("%d %d", &N, &K);
	Ali = 0;
	for (int i = 1; i <= N; i++)
	{
		if ((N % i) == 0)
		{
			count++;
			if (count == K)
			{
				Ali = i;
				break;
			}
		}
	}
	printf("%d", Ali);

	return 0;
}