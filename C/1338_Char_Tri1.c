//1338:문자삼각형1
#include <stdio.h>
int main()
{
	int n,count = 0, op = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		op = 0;
		while (op < n-i)
		{
			printf("  ");
			op++;
		}

		count = i;
		op = n - 1;
		for (int j = 0; j < i; j++)
		{
			printf("%c ", ((count-1)%26)+65);
			count += op;
			op--;
		}
		printf("\n");
	}
	
	return 0;
}