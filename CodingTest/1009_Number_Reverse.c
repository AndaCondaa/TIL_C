//1009:�� �ڸ����� ���� ��

#include <stdio.h>
int main()
{
	int n, op = -1 , zeroout=0 ,count = 10, sum = 0;
	while (count)
	{
		scanf("%d", &n);
		if (n == 0) break;
		sum = 0;
		zeroout = 0;
		while (1)
		{
			if (zeroout > 0)
			{
				op = n % 10;
				n /= 10;
				printf("%d", op);
				sum += op;
				if (n == 0) break;
			}
			else if (zeroout == 0)
			{
				op = n % 10;
				n /= 10;
				if (op != 0)
				{
					printf("%d", op);
					zeroout++;
				}
				sum += op;
			}

		}
		
		printf(" %d\n", sum);
		count--;
	}

	return 0;
}


/*
#include <stdio.h>
#include <string.h>
#include <math.h>

int findNull(char arr[]);
void Reverse(char arr[], int idx);
int toInt(char arr[], int idx);
int Sum(char arr[], int idx);
void outPut(char arr[], int result ,int sum);


int main()
{
	int tmp;
	char arr[21] = { 0, };
	int op = 10, idx = 0, sum = 0, result = 0;
	

	while (op)
	{
		scanf("%s", arr);
		if (arr[0] == '0')
			return 0;
		idx = findNull(arr);
		Reverse(arr, idx);
		result = toInt(arr, idx);
		sum = Sum(arr, idx);
		outPut(arr, result, sum);
		op--;
	}

	return 0;
}


int findNull(char arr[]) {
	int f_idx = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == '\0')
		{
			f_idx = i;
			break;
		}
	}
	
	return f_idx-1;
}

void Reverse(char arr[],int idx) {
	int i = 0;
	char tmp[10] = { 0, };
	
	strcpy(tmp, arr);
	
	for (int i = 0; i < idx+1; i++)
	{
		arr[i] = tmp[idx - i];
		//printf("%c\n", arr[i]);
	}
}

int toInt(char arr[], int idx) {
	int result = 0;
	int jisu;
	for (int i = 0; i < idx + 1; i++)
	{
		jisu = 1;
		for (int j = 0; j < idx - i; j++)
		{
			jisu *= 10;
		}
		result += ((int)(arr[i]) - 48) * jisu;
	}

	return result;
}

int Sum(char arr[], int idx)
{
	int tmp_sum = 0;
	for (int i = 0; i < idx+1; i++)
	{
		tmp_sum += ((int)(arr[i]) - 48);
	}
	return tmp_sum;
}

void outPut(char arr[], int result, int sum) {
	printf("%d", result);
	printf(" %d\n", sum);
}
*/

//1009:�� �ڸ����� ���� ��

#include <stdio.h>
int main()
{
	int n, op = -1 , zeroout=0 ,count = 10, sum = 0;
	while (count)
	{
		scanf("%d", &n);
		if (n == 0) break;
		sum = 0;
		zeroout = 0;
		while (1)
		{
			if (zeroout > 0)
			{s
				op = n % 10;
				n /= 10;
				printf("%d", op);
				sum += op;
				if (n == 0) break;
			}
			else if (zeroout == 0)
			{
				op = n % 10;
				n /= 10;
				if (op != 0)
				{
					printf("%d", op);
					zeroout++;
				}
				sum += op;
			}

		}
		
		printf(" %d\n", sum);
		count--;
	}

	return 0;
}


/*
#include <stdio.h>
#include <string.h>
#include <math.h>

int findNull(char arr[]);
void Reverse(char arr[], int idx);
int toInt(char arr[], int idx);
int Sum(char arr[], int idx);
void outPut(char arr[], int result ,int sum);


int main()
{
	int tmp;
	char arr[21] = { 0, };
	int op = 10, idx = 0, sum = 0, result = 0;
	

	while (op)
	{
		scanf("%s", arr);
		if (arr[0] == '0')
			return 0;
		idx = findNull(arr);
		Reverse(arr, idx);
		result = toInt(arr, idx);
		sum = Sum(arr, idx);
		outPut(arr, result, sum);
		op--;
	}

	return 0;
}


int findNull(char arr[]) {
	int f_idx = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == '\0')
		{
			f_idx = i;
			break;
		}
	}
	
	return f_idx-1;
}

void Reverse(char arr[],int idx) {
	int i = 0;
	char tmp[10] = { 0, };
	
	strcpy(tmp, arr);
	
	for (int i = 0; i < idx+1; i++)
	{
		arr[i] = tmp[idx - i];
		//printf("%c\n", arr[i]);
	}
}

int toInt(char arr[], int idx) {
	int result = 0;
	int jisu;
	for (int i = 0; i < idx + 1; i++)
	{
		jisu = 1;
		for (int j = 0; j < idx - i; j++)
		{
			jisu *= 10;
		}
		result += ((int)(arr[i]) - 48) * jisu;
	}

	return result;
}

int Sum(char arr[], int idx)
{
	int tmp_sum = 0;
	for (int i = 0; i < idx+1; i++)
	{
		tmp_sum += ((int)(arr[i]) - 48);
	}
	return tmp_sum;
}

void outPut(char arr[], int result, int sum) {
	printf("%d", result);
	printf(" %d\n", sum);
}
*/
