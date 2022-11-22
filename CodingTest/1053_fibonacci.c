#include <stdio.h>

int P(int n);

int main()
{
	int n,R;
	do{
		scanf("%d", &n);
		R=P(n);
		printf("%d\n", R%10000);
	} while (n != -1);
	

	return 0;
}

int P(int n)
{
	if (n == 2||n==1) return 1;
	if (n == 0) return 0;
	return P(n - 1) + P(n - 2);
	//return P(n - 1) + P(n - 2);
}