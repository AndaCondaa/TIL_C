#include <stdio.h>
#include <stdlib.h>


int main()
{
	int N;
	int arr[101] = {0,};
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < N; i++)
	{
		int target = i;
		for (int j = i-1; j >= 0; j--)
		{
			if (arr[target] < arr[j])
			{
				int tmp;
				tmp = arr[target];
				arr[target] = arr[j];
				arr[j] = tmp;
				target = j;
			}
			else if (arr[target] >= arr[j]) break;
		}
		//Ãâ·Â
		for (int i = 0; i < N; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
}
