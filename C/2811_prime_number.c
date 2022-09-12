#include <stdio.h>

int main()
{
	int count, input[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d%*c", &input[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		count = 0;
		for (int j = 1; j < input[i]; j++)
		{
			if (input[i] % j == 0)
				count++;
			if (count >= 3)
				break;
		}
		switch (count)
		{
		case 1:
			printf("number one\n");
			break;
		case 2:
			printf("prime number\n");
			break;
		case 3:
			printf("composite number\n");
			break;
		default:
			break;
		}
	}

	





	return 0;
}