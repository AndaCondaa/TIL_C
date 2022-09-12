//1307:문자사각형1
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c ", (((n * n) - (i+1)-(n * j))%26)+65);
		}
		printf("\n");
	}


	return 0;
}