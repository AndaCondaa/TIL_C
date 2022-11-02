//126:반복제어문1-형성평가2

#include <stdio.h>
int main()
{
	int input=-1, odd_count=0, even_count=0;
	
	while (input !=0)
	{
		scanf("%d", &input);
		if (((input % 2) == 0)&&(input!=0))	even_count++;
		else if(((input % 2) == 1) && (input != 0)) odd_count++;
	}
	printf("odd : %d\n", odd_count);
	printf("even : %d\n", even_count);

	return 0;
}
