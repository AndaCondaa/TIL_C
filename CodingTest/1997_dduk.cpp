//1997: dduk

#include <stdio.h>
using namespace std;

int one(int preA);
int two(int preB);

int main()
{
	int a, b;
	int day;
	int dduk;
	int x= -1;
	int y= -1;
	int remain;
	bool op = false;

	scanf("%d %d", &day, &dduk);

	a = one(day-2);
	b = two(day-2);


	for (int i = 1; i <= 100; i++) {
		remain = dduk - (a * i);
		if (((remain % b) == 0)) {
			x = i;
			y = remain / b;
			op = true;
		}
		if (op)
			break;
	}
	printf("%d\n%d", x, y);

	return 0;
}

int one(int n)
{
	if (n == 1 || n ==2) return 1;

	return one(n-1) + one(n-2);
}
int two(int n)
{
	if (n == 1) return 1;
	if (n == 2) return 2;

	return two(n-1) + two(n-2);
}