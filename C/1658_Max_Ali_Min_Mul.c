//1658:최대공약수와 최소공배수
#include <stdio.h>
int main()
{
	int input1, input2, max, min, op;
	scanf("%d %d", &input1, &input2);

	max = 1;

	//최대공약수
	op = input1;
	if (input1 > input2) op = input2;
	for (int i = 1; i <= op; i++)
	{
		if (((input1 % i) == 0) && ((input2 % i) == 0)) max = i;	
	}
	printf("%d\n", max);
	//최대공배수
	min = input1 * input2;

	for (int i = 1; i <= input2; i++)
	{
		for (int j = 1; j <= input1; j++)
		{
			if ((input1 * i) == (input2 * j))
			{
				min = input1 * i;
				printf("%d\n", min);
				return 0;
			}
		}
	}

	return 0;
}

/*
유클리드 호제법(Euclidean algorithm) :

A를 B로 나눈 나머지가 r이라면 A와 B의 최대공약수는 B와 r의 최대공약수와 같다.
GCD(A, B) = GCD(B, r) 이 원리를 이용하면 두 수의 최대공약수를 간단하게 구할 수 있다.

이 방법으로 30과 18의 최대공약수를 구하는 과정을 살펴보면 다음과 같다.

GCD(30, 18) = GCD(18, 12) = GCD(12, 6) = 6 * 30을 18로 나눈 나머지는 12,
18을 12로 나눈 나머지는 6,
12를 6으로 나눈 나머지는 0이므로,
30과 18의 최대공약수는 12와 6의 최대공약수인 6과 같다.
*/