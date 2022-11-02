//539:반복제어문1-자가진단4
/*
#include <stdio.h>
int main()
{
	int i, op = 0, sum = 0;
	while (1)
	{
		scanf("%d", &i);
		sum += i;
		op++;
		if (i >= 100) break;
	}
	printf("%d\n", sum);
	printf("%.1f", (float)sum / (float)op);
}
*/

//540:반복제어문1-자가진단5
/*
#include <stdio.h>	
int main()
{
	int input;
	do {
		scanf("%d", &input);
		if ((input % 3) == 0)
		{
			printf("%d\n", input / 3);
		}
	} while (input != -1);

	return 0;
}
*/

//633:반복제어문1-자가진단6
/*
#include <stdio.h>
int main()
{
	int n;

	while(1)
	{
		printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
		scanf("%d", &n);

		switch (n)
		{
		case 1: printf("\nSeoul\n"); break;
		case 2: printf("\nWashington\n"); break;
		case 3: printf("\nTokyo\n"); break;
		case 4: printf("\nBeijing\n"); break;
		default:printf("\nnone\n"); return 0;
		}
		printf("\n");
	}

	return 0;
}
*/

//125:반복제어문1-형성평가1
/*
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", i + 1);
	}
	return 0;
}
*/

//539:반복제어문1-자가진단4
/*
#include <stdio.h>
int main()
{
	int i, op = 0, sum = 0;
	while (1)
	{
		scanf("%d", &i);
		sum += i;
		op++;
		if (i >= 100) break;
	}
	printf("%d\n", sum);
	printf("%.1f", (float)sum / (float)op);
}
*/

//540:반복제어문1-자가진단5
/*
#include <stdio.h>	
int main()
{
	int input;
	do {
		scanf("%d", &input);
		if ((input % 3) == 0)
		{
			printf("%d\n", input / 3);
		}
	} while (input != -1);

	return 0;
}
*/

//633:반복제어문1-자가진단6
/*
#include <stdio.h>
int main()
{
	int n;

	while(1)
	{
		printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
		scanf("%d", &n);

		switch (n)
		{
		case 1: printf("\nSeoul\n"); break;
		case 2: printf("\nWashington\n"); break;
		case 3: printf("\nTokyo\n"); break;
		case 4: printf("\nBeijing\n"); break;
		default:printf("\nnone\n"); return 0;
		}
		printf("\n");
	}

	return 0;
}
*/

//125:반복제어문1-형성평가1
/*
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", i + 1);
	}
	return 0;
}
*/

