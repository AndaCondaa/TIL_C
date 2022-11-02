//1430:숫자의 개수
#include <stdio.h>
int main()
{
	int A, B, C, result, op, size = 0, tmp;
	int count[10] = { 0, };
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	result = A * B * C;
	tmp = result;

	//자리수
	while (tmp)
	{
		tmp /= 10;
		size++;
	}

	for (int i = 0; i < size; i++)
	{
		op = result % 10;
		result /= 10;
		//printf("%d\n", result);
		count[op]++;
	}
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", count[i]);
	}


	return 0;
}