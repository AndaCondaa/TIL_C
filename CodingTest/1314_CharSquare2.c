//1314:문자사각형2
#include <stdio.h>
int main()
{
	int n, output;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		output = i;
		for (int j = 0; j < n; j++)
		{

			if (output < n) //첫번째 찍고
			{
				printf("%c ", (output % 26) + 65);
				output += (2 * n) - (2 * (i + 1) - 1);
			}
			else if ((j % 2) == 1)
			{

				printf("%c ", (output % 26) + 65);
				output += (2 * (i + 1) - 1);
			}
			else if ((j % 2) == 0)
			{
				printf("%c ", (output % 26) + 65);
				output += (2 * n) - (2 * (i + 1) - 1);

			}
		}
		printf("\n");
	}


	return 0;
}
	
//1314:문자사각형2
#include <stdio.h>
int main()
{
	int n, output;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		output = i;
		for (int j = 0; j < n; j++)
		{
			
			if (output < n) //첫번째 찍고
			{
				printf("%c ", (output%26)+65);
				output += (2 * n) - (2 * (i+1) - 1);
			}
			else if ((j % 2) == 1) 
			{
				
				printf("%c ", (output%26)+65);
				output += (2 * (i+1) - 1);
			}
			else if ((j%2) == 0)
			{
				printf("%c ", (output%26)+65);
				output += (2 * n) - (2 * (i+1) - 1);

			}
		}
		printf("\n");
	}


	return 0;
}