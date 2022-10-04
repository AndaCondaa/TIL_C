//1071:����� ���
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, m, tmp, * input, * count_Ali, sum_Ali = 0, sum_Mul = 0, max;

	scanf("%d", &n);
	input = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input[i]);
	}
	scanf("%d", &m);

	//������ϱ�
	count_Ali = (int*)malloc(sizeof(int) * (m + 1));
	memset(count_Ali, 0, (sizeof(int) * (m + 1)));
	for (int i = 1; i <= m; i++)
	{
		if ((m % i) == 0) count_Ali[i]++;
	}
	for (int i = 1; i <= m; i++)
	{
		if (count_Ali[i] != 0)
		{
			for (int j = 0; j < n; j++)
			{
				if (input[j] == i) sum_Ali += i;
			}
		}
	}
	printf("%d\n", sum_Ali);
	//������ϱ�
	max = input[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (input[i] < input[j])
			{
				max = input[j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if ((input[i] % m) == 0) sum_Mul += input[i];
	}
	printf("%d\n", sum_Mul);

	free(count_Ali);
	free(input);
	return 0;
}