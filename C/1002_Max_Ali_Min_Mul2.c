//1002:최대공약수,최소공배수
#include <stdio.h>
#include <stdlib.h>

int MAX_ALI(int n1, int n2);

int main()
{
	int n, *num, max, min;
	scanf("%d", &n);
	num = (int*)malloc(sizeof(int) * n);
	n--;
	for (int i = 0; i <= n; i++)
	{
		scanf("%d", &num[i]);
	}
	//최대공약수
	max = MAX_ALI(num[0], num[1]);
	printf("%d", max);
	for (int i = 2; i <= n; i++)
	{
		max = MAX_ALI(max, num[i]);
	}
	printf("%d", max);




	return 0;
}

int MAX_ALI(int n1, int n2)
{
	int tmp;
	int tmp_max=1;
	if (n1 > n2)
	{
		tmp = n2;
		n2 = n1;
		n1 = tmp;
		printf("%d", n1);
	}
	else if (n1 = n2) return n1;
	
	for (int i = 1; i <= n1; i++)
	{
		if((n1%i==0)&&(n2%i==0)) tmp_max=i; 

	}
	return tmp_max;
}
