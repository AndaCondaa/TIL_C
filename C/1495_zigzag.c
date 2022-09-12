#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 1, n, x = 0, y = 0;
	int arr[100][100] = { 0, };
	
	scanf("%d", &n);

	for (int k = 1; k < n * 2; k++)
	{
		if (k < n)
		{
			if ((k % 2) == 1)
			{
				for (int i = 0; i < k; i++)
				{
					if (y == 0)
					{
						arr[x][y] = count++;
						x++; break;
					}
					arr[x][y] = count++;
					x++; y--;
				}	
			}
			else if ((k % 2) == 0)
			{
				for (int i = 0; i < k; i++)
				{
					
					if (x == 0)
					{
						arr[x][y] = count++;
						y++; break;
					}
					arr[x][y] = count++;
					x--; y++;
				}
			}
		}
		else if (k >= n)
		{
			if ((k % 2) == 1)
			{
				for (int i = 0; i < (k+1) - (2*(k-n-1)); i++)
				{
					if (x == n-1)
					{
						arr[x][y] = count++;
						y++; break;
					}
					arr[x][y] = count++;
					x++; y--;

				}
			}
			else if ((k % 2) == 0)
			{
				for (int i = 0; i < (k+1) - (2 * (k - n-1)); i++)
				{
					if (y == n-1)
					{
						arr[x][y] = count++;
						x++; break;
					}
					arr[x][y] = count++;
					x--; y++;
					
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;

}