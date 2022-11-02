//1341:备备窜2
#include <stdio.h>
int main()
{
	int s, e, count, op;
	scanf("%d%d", &s, &e);

	if (s >= e) {
		count = s - e + 1;
		for (int i = 0; i < count; i++)
		{
			op = 1;
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s - i, op, (s - i) * (op));
				op++;
			}
			printf("\n");
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s - i, op, (s - i) * (op));
				op++;
			}
			printf("\n");
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s - i, op, (s - i) * (op));
				op++;
			}
			printf("\n\n");
		}
	}
	else
	{
		count = e - s + 1;
		for (int i = 0; i < count; i++)
		{
			op = 1;
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s + i, op, (s + i) * (op));
				op++;
			}
			printf("\n");
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s + i, op, (s + i) * (op));
				op++;
			}
			printf("\n");
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s + i, op, (s + i) * (op));
				op++;
			}
			printf("\n\n");
		}
	}
	return 0;
}

//1341:备备窜2
#include <stdio.h>
int main()
{
	int s, e, count, op;
	scanf("%d%d", &s, &e);

	if (s >= e) {
		count = s - e + 1;
		for (int i = 0; i < count; i++)
		{
			op = 1;
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s - i, op, (s - i) * (op));
				op++;
			}
			printf("\n");
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s - i, op, (s - i) * (op));
				op++;
			}
			printf("\n");
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s - i, op, (s - i) * (op));
				op++;
			}
			printf("\n\n");
		}
	}
	else
	{
		count = e - s + 1;
		for (int i = 0; i < count; i++)
		{
			op = 1;
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s + i, op, (s + i) * (op));
				op++;
			}
			printf("\n");
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s + i, op, (s + i) * (op));
				op++;
			}
			printf("\n");
			for (int j = 0; j < 3; j++)
			{
				printf("%d * %d = %2d   ", s + i, op, (s + i) * (op));
				op++;
			}
			printf("\n\n");
		}
	}
	return 0;
}