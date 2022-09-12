//1523:별삼각형1
#include <stdio.h>

//함수 선언
void P1(int n);
void P2(int n);
void P3(int n);

//main함수
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	if (n > 100 || n < 0 || m < 0 || m>3)
	{
		printf("INPUT ERROR!");
		return 0;
	}

	switch (m) {
	case 1:
		P1(n);
		break;
	case 2:
		P2(n);
		break;
	case 3:
		P3(n);
		break;
	}
	return 0;
}

void P1(int n) {
	int op;
	for (int i = 0; i < n; i++)
	{
		op = 0;
		while (op <= i)
		{
			printf("*");
			op++;
		}
		printf("\n");
	}
}

void P2(int n) {
	int op;
	for (int i = 0; i < n; i++)
	{
		op = n;
		while (op > i)
		{
			printf("*");
			op--;
		}
		printf("\n");
	}
}

void P3(int n) {
	int op;
	for (int i = 0; i < n; i++)
	{
		op = 0;
		while (op < ((n - 1) - i))
		{
			printf(" ");
			op++;
		}


		op = 0;
		while (op < (2 * i + 1))
		{
			printf("*");
			op++;
		}
		printf("\n");
	}
}
	
//1523:별삼각형1
#include <stdio.h>

//함수 선언
void P1(int n);
void P2(int n);
void P3(int n);

//main함수
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	if (n > 100 || n < 0 || m < 0 || m>3)
	{
		printf("INPUT ERROR!");
		return 0;
	}

	switch (m) {
	case 1:
		P1(n);
		break;
	case 2:
		P2(n);
		break;
	case 3:
		P3(n);
		break;
	}
	return 0;
}

void P1(int n) {
	int op;
	for (int i = 0; i < n; i++)
	{
		op = 0;
		while (op <= i)
		{
			printf("*");
			op++;
		}
		printf("\n");
	}
}

void P2(int n) {
	int op;
	for (int i = 0; i < n; i++)
	{
		op = n;
		while (op > i)
		{
			printf("*");
			op--;
		}
		printf("\n");
	}
}

void P3(int n) {
	int op;
	for (int i = 0; i < n; i++)
	{
		op = 0;
		while (op < ((n - 1) - i))
		{
			printf(" ");
			op++;
		}


		op = 0;
		while (op<(2*i+1))
		{ 
			printf("*");
			op++;
		}
		printf("\n");
	}
}