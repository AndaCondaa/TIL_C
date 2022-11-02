//1291:구구단
/*
#include <stdio.h>

int main()
{
	int s, e, i, j, size;
	while (1)
	{
		scanf("%d%d", &s, &e);

		if ((s>=2)&&(s<=9)&&(e<=9)&&(e>=2))
		{
			if (s > e)
			{
				for (i = 1; i < 10; i++)
				{
					for (j = s; j >= e; j--)
					{
						printf("%d * %d =%3d   ", j, i, j * i);
					}
					printf("\n");
				}
			}
			else if (s < e)
			{
				for (i = 1; i < 10; i++)
				{
					for (j = s; j <= e; j++)
					{
						printf("%d * %d =%3d   ", j, i, j * i);
					}
					printf("\n");
				}
			}
			else
			{
				for (i = 1; i < 10; i++)
					printf("%d * %d =%3d\n", s, i, s * i);
			}

			break;
		}
		else
			printf("INPUT ERROR!\n");


	}


	return 0;

}
*/

//구구단
/*
#include <stdio.h>

int main(int argc, char** argv)
{
	int s, e;
	int i, j;
	int flag = 0;

	do {
		if (flag == 1) printf("INPUT ERROR!\n");
		scanf("%d %d", &s, &e);
		flag = 1;
	} while ((s < 2 || s > 9) || (e < 2 || e > 9));

	for (j = 1; j < 10; j++) {
		if (s < e) {
			for (i = s; i <= e; i++) {
				printf("%d * %d = %2d   ", i, j, i * j);
			}
		}
		else {
			for (i = s; i >= e; i--) {
				printf("%d * %d = %2d   ", i, j, i * j);
			}
		}
		printf("\n");
	}

	return 0;
}
*/

//숫자사각형1
/*
#include <stdio.h>
int main()
{
	int n, m, i, j;
	int flag = 0;
	int p=1;

	do {
		if (flag == 1)
			printf("ERROR\n");
		flag = 1;
		scanf("%d %d", &n, &m);

	} while ((n < 0) || (n > 100) || (m < 0) || (m > 100));
	//경계값 모호
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= m; i++)
			printf("%d ", p++);

		printf("\n");
	}
	return 0;
}
*/

//숫자사각형2
/*
#include <stdio.h>

int main()
{
	int n, m, i, j;
	int flag = 0;
	int p = 1;

	do {
		if (flag == 1)
			printf("ERROR\n");
		flag = 1;
		scanf("%d %d", &n, &m);

	} while ((n < 0) || (n > 100) || (m < 0) || (m > 100));
	//경계값 모호


	for (j = 1; j <= n; j++)
	{
		if ((j % 2) == 1)
		{
			for (i = 1; i <= m; i++)
				printf("%d ", p++);
		}
		else if ((j % 2) == 0)
		{
			p += (m - 1);
			for (i = 1; i <= m; i++)
				printf("%d ", p--);
			p += (m + 1);
		}

		printf("\n");
	}
	return 0;
}
*/


//숫자사각형2
/*
#include <stdio.h>

int main()
{
	int n, m;
	int i, j, count = 1, flag = 0;

	do {
		if (flag == 1) printf("INPUT ERROR!\n");
		scanf("%d %d", &n, &m);
		flag = 1;
	} while ((n < 0 || n > 100) || (m < 0 || m > 100));

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", (i % 2) ? (count++, (i + 1) * m - j) : count++);
		}
		printf("\n");
	}

	return 0;
}
*/

//숫자사각형3
/*
#include <stdio.h>
int main()
{
	int n, i, j;
	int flag = 0;
	int p = 1;

	do {
		if (flag == 1)
			printf("ERROR\n");
		flag = 1;
		scanf("%d", &n);

	} while ((n < 0) || (n > 100));
	//경계값 모호


	for (j=1; j<=n; j++)
	{
		p = j;
		for (i = 1; i <= n; i++)
		{
			printf("%d ", p);
			p += n;
		}

		printf("\n");
	}
	return 0;
}
*/


//문자사각형1 -> 모듈러스 연산자
/*
#include <stdio.h>
int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c ", 'A' + ((n * n) - (i + n * j) - 1) % 26);
		}
		printf("\n");

	}
}
*/

//문자사각형1
/*
#include <stdio.h>

int main()
{
	int n, n2, i, j, flag = 0;

	do {
		if (flag == 1) printf("INPUT ERROR!\n");
		scanf("%d", &n);
		flag = 1;
	} while ((n < 0 || n > 100));

	for (i = 1, n2 = n * n; i <= n; i++) {
		for (j = 0; j < n; j++) {
			printf("%c ", 'A' + (n2 - (i + n * j)) % 26);
		}
		printf("\n");
	}

	return 0;
}
*/

//곱셈
/*
#include <stdio.h>

int main()
{
	int a, b, i100, i10, i1;


	scanf("%d %d", &a, &b);

	i100 = b / 100;
	i10 = (b - i100*100) / 10;
	i1 = (b - i100*100 - i10*10);

	printf("%d\n", a*i1);
	printf("%d\n", a*i10);
	printf("%d\n", a*i100);
	printf("%d\n", a * b);



	return 0;
}
*/

//약수
/*
#include <stdio.h>
#include <math.h>

int main()
{
	int input, sq, i, N, tmp, count=0;
	int array[1000];

	scanf("%d", &input);

	sq = (int)sqrt(input);

	for (i = 1; i <= sq; i++)
	{
		if ((input % i) == 0)
		{
			array[count] = i;
			count++;
			N = input / i;
			if (i != N)
			{
				array[count] = N;
				count++;
			}
		}

	}

	count--;
	for (int j = 0; j < count; j++)
	{
		for (i = 0; i < count; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}

		}
	}
	for (i = 0; i <= count; i++)
	{
		printf("%d ", array[i]);
	}


	return 0;
}
*/


//비기너코드부터는 꼭 다른 사람의 코드도 참고할 것!!!!!!!!!!!!!!!!!!!!1
//비기너코드부터는 꼭 다른 사람의 코드도 참고할 것!!!!!!!!!!!!!!!!!!!!1
//비기너코드부터는 꼭 다른 사람의 코드도 참고할 것!!!!!!!!!!!!!!!!!!!!1
//비기너코드부터는 꼭 다른 사람의 코드도 참고할 것!!!!!!!!!!!!!!!!!!!!1
//비기너코드부터는 꼭 다른 사람의 코드도 참고할 것!!!!!!!!!!!!!!!!!!!!1
//비기너코드부터는 꼭 다른 사람의 코드도 참고할 것!!!!!!!!!!!!!!!!!!!!1
//비기너코드부터는 꼭 다른 사람의 코드도 참고할 것!!!!!!!!!!!!!!!!!!!!1
//비기너코드부터는 꼭 다른 사람의 코드도 참고할 것!!!!!!!!!!!!!!!!!!!!1
//비기너코드부터는 꼭 다른 사람의 코드도 참고할 것!!!!!!!!!!!!!!!!!!!!1
