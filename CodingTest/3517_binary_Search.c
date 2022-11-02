//3517:이진탐색
#include <stdio.h>
#include <stdlib.h>

int t(int num[], int low, int high, int target);

int main()
{
	int N, Q, target, low, high;

	//1. 입력부분
	scanf("%d", &N);
	int* num = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d%*c", &num[i]);
	}
	printf("\n");
	scanf("%d", &Q);
	int* Qnum = (int*)malloc(sizeof(int) * Q);
	for (int i = 0; i < Q; i++)
	{
		scanf("%d%*c", &Qnum[i]);
	}

	//2. 이진탐색
	for (int i = 0; i < Q; i++)
	{
		target = Qnum[i];
		low = 0;
		high = N - 1;

		Qnum[i] = t(num, low, high, target);

	}

	//출력
	for (int i = 0; i < Q; i++)
	{
		printf("%d ", Qnum[i]);
	}

	return 0;

}

int t(int num[], int low, int high, int target)
{
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (num[mid] == target)
			return mid;
		else if (num[mid] > target)
			high = mid - 1;
		else if (num[mid] < target)
			low = mid + 1;
	}
	return -1;
}

//3517:이진탐색
#include <stdio.h>
#include <stdlib.h>

int t(int num[], int low, int high, int target);

int main()
{
	int N, Q, target, low, high;

	//1. 입력부분
	scanf("%d", &N);
	int* num = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d%*c", &num[i]);
	}
	printf("\n");
	scanf("%d", &Q);
	int* Qnum = (int*)malloc(sizeof(int) * Q);
	for (int i = 0; i < Q; i++)
	{
		scanf("%d%*c", &Qnum[i]);
	}

	//2. 이진탐색
	for (int i = 0; i < Q; i++)
	{
		target = Qnum[i];
		low = 0;
		high = N - 1;

		Qnum[i] = t(num, low, high, target);

	}

	//출력
	for (int i = 0; i < Q; i++)
	{
		printf("%d ", Qnum[i]);
	}

	return 0;

}

int t(int num[], int low, int high, int target)
{
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (num[mid] == target)
			return mid;
		else if (num[mid] > target)
			high = mid - 1;
		else if (num[mid] < target)
			low = mid + 1;
	}
	return -1;
}