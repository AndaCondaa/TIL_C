#include <stdio.h>
#include <stdlib.h>

void down(int n);
void left(int n);
void up(int n);
void print(int n);
int count = 0;
int R = 0;
int x = 0, y = 0;
int arr[100][100] = { 0, };

int main()
{
	int n, op=0;
	scanf("%d", &n);

	while (n != R)
	{
		op = op % 3;
		switch (op)
		{
		case 0: down(n);  break;
		case 1: left(n);  break;
		case 2: up(n);   break;
		}
		op++;
	}
	print(n);
}


void down(int n)
{
	for (int i = 0; i < n - R; i++)
	{
		if (i == (n - R - 1))
		{
			arr[x][y] = count++;
			y--;
		}
		else
		{
			arr[x][y] = count;
			count++;
			x++;
			y++;
		}
	}
	R++;	
}

void left(int n)
{
	for (int i = 0; i < n - R; i++)
	{
		if (i == (n - R - 1))
		{
			arr[x][y] = count++;
			x--;
		}
		else 
		{
			arr[x][y] = count++;
			y--;
		}
	}
	R++;
}

void up(int n)
{
	for (int i = 0; i < n - R; i++)
	{
		if (i == (n - R - 1))
		{
			arr[x][y] = count++;
			x++;
			y++;
		}
		else 
		{
			arr[x][y] = count++;
			x--;
		}
	}
	R++;
}

void print(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("%d ", arr[i][j]%=10);
		}
		printf("\n");
	}
}