//1658:�ִ������� �ּҰ����
#include <stdio.h>
int main()
{
	int input1, input2, max, min, op;
	scanf("%d %d", &input1, &input2);

	max = 1;

	//�ִ�����
	op = input1;
	if (input1 > input2) op = input2;
	for (int i = 1; i <= op; i++)
	{
		if (((input1 % i) == 0) && ((input2 % i) == 0)) max = i;	
	}
	printf("%d\n", max);
	//�ִ�����
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
��Ŭ���� ȣ����(Euclidean algorithm) :

A�� B�� ���� �������� r�̶�� A�� B�� �ִ������� B�� r�� �ִ������� ����.
GCD(A, B) = GCD(B, r) �� ������ �̿��ϸ� �� ���� �ִ������� �����ϰ� ���� �� �ִ�.

�� ������� 30�� 18�� �ִ������� ���ϴ� ������ ���캸�� ������ ����.

GCD(30, 18) = GCD(18, 12) = GCD(12, 6) = 6 * 30�� 18�� ���� �������� 12,
18�� 12�� ���� �������� 6,
12�� 6���� ���� �������� 0�̹Ƿ�,
30�� 18�� �ִ������� 12�� 6�� �ִ������� 6�� ����.
*/