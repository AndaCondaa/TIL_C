#include <stdio.h>
#include <string.h>
int main()
{
	char dish[51] = { 0, };
	int size;
	int H = 10;
	scanf("%s", &dish);
	size = strlen(dish);
	for (int i = 1; i < size; i++)
	{
		if (dish[i - 1] == dish[i]) H += 5;
		else H += 10;
	}
	printf("%d", H);
	return 0;
}