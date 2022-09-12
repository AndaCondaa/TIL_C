//연산자-자가진단7 ->>>>>>>>>>>>>>>>(논리곱: &&, 논리합: ||)
/*
#include <stdio.h>
int main()
{
	int i1;
	int i2;

	scanf("%d%d", &i1, &i2);

	printf("%d ", i1&&i2);
	printf("%d", i1||i2);

	return 0;
}
*/

//연산자-자가진단8
/*
#include <stdio.h>
int main()
{
	int i1;
	int i2;
	int i3;

	scanf("%d%d%d", &i1, &i2, &i3);
	printf("%d ", (i1 > i2) && (i1 > i3));
	printf("%d", (i1 == i2) && (i2 == i3));

	return 0;
}
*/

//디버깅-자가진단1 ->>>>>>>>>>>>>>>>(long double - double - float - long long - long - int)
/*
#include <stdio.h>

int main()
{
	double d1;
	double d2;

	scanf("%lf%lf", &d1, &d2);

	printf("%d ", (int)(d1*d2));
	printf("%d", (int)d1 * (int)d2);


	return 0;
}
*/

//디버깅-자가진단2 ->>>>>>>>>>>>>>>>>(몫: / , 나머지: %)
/*
#include <stdio.h>
int main()
{
	int i1, i2;

	scanf("%d%d", &i1, &i2);
	printf("%d ", i1 / i2);
	printf("%.2f", (float)i1 / i2);

	return 0;
}
*/

//디버깅-형성평가3
/*
#include <stdio.h>
int main()
{
	int a = 5;
	a += 10;
	a = a - 1;
	printf("%d\n", 15);

	return 0;
}
*/

//디버깅-형성평가4
/*
#include <stdio.h>
#include <time.h>
int main()
{
	int a = 0;
	time_t now;
	struct tm tt;
	time(&now);
	tt = *localtime(&now);
	a = tt.tm_year;
	a += tt.tm_mon;
	a += tt.tm_mday;
	printf("%d %d %d\n", 0, 122, 138);

	return 0;
}
*/

//선택제어문-자가진단9
/*
#include <stdio.h>
int main()
{
	int i1, i2, i3;

	scanf("%d %d %d", &i1, &i2, &i3);

	if (i1 < i2)
	{
		if (i1 < i3)
			printf("%d", i1);
		else if (i1 > i3)
			printf("%d", i3);
	}
	else if (i1 > i2)
	{
		if (i2 < i3)
			printf("%d", i2);
		else if (i2 > i3)
			printf("%d", i3);
	}
	return 0;
}
*/

//반복제어문1-자가진단1
/*
#include <stdio.h>
int main()
{
	int i = 1;

	while (i <= 15)
	{
		printf("%d ", i++);
	}

	return 0;
}
*/

//반복제어문1-자가진단2
/*
#include <stdio.h>
int main() {
	int N, count = 1, sum = 0;

	do {
		//printf("입력: ");
		scanf("%d", &N);
	} while ((N < 0) || N > 100);

	while (count <= N)
	{
		sum += count;
		count++;
	}

	printf("%d", sum);

	return 0;
}
*/

//출력-자가진단6
/*
#include <stdio.h>
int main()
{
	printf("My height\n170\nMy weight\n68.600000");

	return 0;
}
*/

//출력-자가진단7
/*
#include <stdio.h>
int main()
{
	int i = 5;

	printf("%d Dan", i);
	printf("\n%d * 2 = %d", i, i * 2);

	return 0;
}
*/

//출력-형성평가1
/*
#include <stdio.h>
int main()
{
	char a[10] = "Hong";

	printf("My name is %s", a);

	return 0;
}
*/

//출력-형성평가2
/*
#include <stdio.h>
int main()
{
	char a[20] = "Flowering mountain";

	printf("My hometown\n%s", a);

	return 0;
}
*/

//출력-형성평가 3
/*
#include <stdio.h>
int main()
{
	char T = 'T';

	printf("%c%c%c%c%c%c%c%c%c%c\n", T, T, T, T, T, T, T, T, T, T);
	printf("%c%c%c%c%c%c%c%c%c%c\n", T, T, T, T, T, T, T, T, T, T);
	printf("    %c%c\n", T,T);
	printf("    %c%c\n", T,T);
	printf("    %c%c\n", T,T);
	
	return 0;
}
*/

//출력-형성평가 4
/*
#include <stdio.h>
int main()
{
	int kor = 90, mat = 80, eng = 100;

	printf("kor %d\n", kor);
	printf("mat %d\n", mat);
	printf("eng %d\n", eng);
	printf("sum %d\n", kor+mat+eng);
	return 0;
}
*/

//출력-형성평가5 ->>>>>>>>>>>>>>>> 이차원 배열의 출력??!?!?!?
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char First[6][30] = { {"Seoul"},{"Pusan"},{"Incheon"},{"Daegu"},{"Gwangju"} };
	char Second[6][30] = { {"10,312,545"},{"3,567,910"},{"2,758,296"},{"2,511,676"},{"1,454,636"} };
	char Third[6][30] = { {"+91,375"},{"+5,868"},{"+64,888"},{"+17,230"},{"+29,774"} };

	for (int i = 0; i < 5; i++)
	{
		printf("%15s%15s%15s\n", *(First+i), *(Second+i), *(Third+i));
	}

	return 0;
}
*/

//입력-자가진단1
/*
#include <stdio.h>
int main()
{
	int i = -100;
	printf("%d", i);

	return 0;
}
*/

//입력-자가진단2
/*
#include <stdio.h>
int main()
{
	int i1 = -1, i2 = 100;
	printf("%d\n%d", i1, i2);

	return 0;
}
*/

//입력-자가진단3
/*
#include <stdio.h>
int main()
{
	int i1, i2;

	i1 = 55;
	i2 = 10;
	printf("%d - %d = %d\n", i1, i2, i1 - i2);
	i1 = 2008;
	i2 = 1999;
	printf("%d - %d = %d\n", i1, i2, i1 - i2);

	return 0;
}
*/

//입력-자가진단4
/*
#include <stdio.h>
int main()
{
	int weight;
	double ratio;

	weight = 49;
	ratio = 0.2683;

	printf("%d * %f = %lf", weight, ratio, (double)weight * ratio);

	return 0;
}
*/

//514:입력-자가진단6
/*
#include <stdio.h>
int main()
{
	int height;

	printf("height = ");
	scanf("%d", &height);
	printf("Your height is %dcm.", height);



	return 0;
}
*/

//515:입력-자가진단7
/*
#include <stdio.h>
int main()
{
	int i1, i2;
	scanf("%d %d", &i1, &i2);
	printf("%d * %d = %d\n", i1, i2, i1 * i2);
	printf("%d / %d = %d", i1, i2, i1 / i2);

	return 0;
}
*/

//516:입력-자가진단8 ->>>>>>>>>>>>>>>>>>>>>scanf에서 %c는 입력버퍼에 남은 것을 가져온다! 숫자형 형식지정자 입력버퍼 없앤다.
/*
#include <stdio.h>
int main()
{
	double i1, i2;
	char a;

	scanf("%lf%lf %c", &i1,&i2,&a);  
	//scanf("%lf", &i2);
	//scanf("%*c%c", &a);

	printf("%.2lf\n", i1);
	printf("%.2lf\n", i2);
	printf("%c\n", a);


	return 0;
}
*/

//517:입력-자가진단9
/*
#include <stdio.h>
int main()
{
	float f1, f2, f3;
	scanf("%f%f%f", &f1, &f2, &f3);
	printf("%.3f\n%.3f\n%.3f", f1, f2, f3);



	return 0;
}
*/

//106:입력-형성평가1
/*
#include <stdio.h>
int main()
{
	int i1 = 10, i2 = 20, i3 = 30;


	printf("%d + %d = %d", i1, i2, i3);



	return 0;
}
*/

//107:입력-형성평가2
/*
#include <stdio.h>
int main()
{
	float a = 80.5, b = 22.34;

	printf("%10.2f%10.2f%10.2f", a, b, a + b);

	return 0;
}
*/

//109:입력-형성평가4
/*
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("sum = %d", a + b + c);


	return 0;
}
*/

//110:입력-형성평가5
/*
#include <stdio.h>
int main()
{
	double yard;

	printf("yard? ");
	scanf("%lf", &yard);
	printf("%.1fyard = %.1fcm", yard, yard * 91.44);

	return 0;
}
*/

//518:연산자-자가진단1
/*
#include <stdio.h>
int main()
{
	int i1, i2, i3;
	scanf("%d%d%d", &i1, &i2, &i3);
	printf("sum : %d\n", i1 + i2 + i3);
	printf("avg : %d\n", (i1 + i2 + i3) / 3);

	return 0;
}
*/

//519:연산자-자가진단2
/*
#include <stdio.h>
int main()
{
	int i1, i2;
	scanf("%d %d", &i1, &i2);
	printf("%d %d", i1 += 100, i2 % 10);

	return 0;
}
*/

//523:연산자-자가진단6
/*
#include <stdio.h>
int main()
{
	int i1, i2;
	scanf("%d %d", &i1, &i2);
	printf("%d > %d --- %d\n", i1, i2, i1 > i2);
	printf("%d < %d --- %d\n", i1, i2, i1 < i2);
	printf("%d >= %d --- %d\n", i1, i2, i1 >= i2);
	printf("%d <= %d --- %d\n", i1, i2, i1 <= i2);
	return 0;

}
*/

//111:연산자-형성평가1
/*
#include <stdio.h>
int main()
{
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("sum %d\n", a + b + c + d);
	printf("avg %d\n", (a + b + c + d) / 4);

	return 0;
}
*/

//112:연산자-형성평가2
/*
#include <stdio.h>
int main()
{
	int i1, i2;
	scanf("%d %d", &i1, &i2);
	printf("%d / %d = %d...%d", i1, i2, i1 / i2, i1 % i2);

	return 0;
}
*/

//113:연산자-형성평가3
/*
#include <stdio.h>
int main()
{
	int w, l, a;
	
	scanf("%d %d", &w, &l);
	w += 5;
	l *= 2;
	a = w * l;
	printf("width = %d\n", w);
	printf("length = %d\n", l);
	printf("area = %d\n", a);
	return 0;
}
*/

//114:연산자-형성평가4
/*
#include <stdio.h>
int main()
{
	int i1, i2;
	scanf("%d %d", &i1, &i2);
	printf("%d %d\n", ++i1, i2--);
	printf("%d %d", i1, i2);

	return 0;
}
*/

//115:연산자-형성평가5
/*
#include <stdio.h>
int main() {
	int M1, M2, K1, K2;
	scanf("%d %d %d %d", &M1, &M2, &K1, &K2);
	//scanf("%d %d", &K1, K2);
	printf("%d", (M1 > K1) && (M2 > K2));

	return 0;
}
*/

//116:디버깅-형성평가1
/*
#include <stdio.h>
int main()
{
	int i1, i2, i3;
	double avg;
	scanf("%d %d %d", &i1, &i2, &i3);
	avg = (float)(i1 + i2 + i3) / 3;
	printf("%.1lf", avg);

	return 0;
}
*/

//117:디버깅-형성평가2
/*
#include <stdio.h>
int main()
{
	float a, b, c, avg;
	int sum;
	scanf("%f %f %f", &a, &b, &c);
	sum = (int)a + (int)b + (int)c;
	avg = sum / 3.0;
	printf("sum %d\n", sum);
	printf("avg %.f", avg);

	return 0;
}
*/

//528:선택제어문-자가진단1
/*
#include <stdio.h>
int main()
{
	int op;
	
	scanf("%d", &op);
	printf("%d\n", op);

	if (op < 0)
		printf("minus");

	return 0;
}
*/

//529:선택제어문-자가진단2
/*
#include <stdio.h>
int main()
{
	int height, weight, BMI;

	scanf("%d %d", &height, &weight);
	
	BMI = weight + 100 - height;
	printf("%d", BMI);
	if (BMI > 0)
		printf("\nObesity");


	return 0;
}
=======
//연산자-자가진단7 ->>>>>>>>>>>>>>>>(논리곱: &&, 논리합: ||)
/*
#include <stdio.h>
int main()
{
	int i1;
	int i2;

	scanf("%d%d", &i1, &i2);

	printf("%d ", i1&&i2);
	printf("%d", i1||i2);

	return 0;
}
*/

//연산자-자가진단8
/*
#include <stdio.h>
int main()
{
	int i1;
	int i2;
	int i3;

	scanf("%d%d%d", &i1, &i2, &i3);
	printf("%d ", (i1 > i2) && (i1 > i3));
	printf("%d", (i1 == i2) && (i2 == i3));

	return 0;
}
*/

//디버깅-자가진단1 ->>>>>>>>>>>>>>>>(long double - double - float - long long - long - int)
/*
#include <stdio.h>

int main()
{
	double d1;
	double d2;

	scanf("%lf%lf", &d1, &d2);

	printf("%d ", (int)(d1*d2));
	printf("%d", (int)d1 * (int)d2);


	return 0;
}
*/

//디버깅-자가진단2 ->>>>>>>>>>>>>>>>>(몫: / , 나머지: %)
/*
#include <stdio.h>
int main()
{
	int i1, i2;

	scanf("%d%d", &i1, &i2);
	printf("%d ", i1 / i2);
	printf("%.2f", (float)i1 / i2);

	return 0;
}
*/

//디버깅-형성평가3
/*
#include <stdio.h>
int main()
{
	int a = 5;
	a += 10;
	a = a - 1;
	printf("%d\n", 15);

	return 0;
}
*/

//디버깅-형성평가4
/*
#include <stdio.h>
#include <time.h>
int main()
{
	int a = 0;
	time_t now;
	struct tm tt;
	time(&now);
	tt = *localtime(&now);
	a = tt.tm_year;
	a += tt.tm_mon;
	a += tt.tm_mday;
	printf("%d %d %d\n", 0, 122, 138);

	return 0;
}
*/

//선택제어문-자가진단9
/*
#include <stdio.h>
int main()
{
	int i1, i2, i3;

	scanf("%d %d %d", &i1, &i2, &i3);

	if (i1 < i2)
	{
		if (i1 < i3)
			printf("%d", i1);
		else if (i1 > i3)
			printf("%d", i3);
	}
	else if (i1 > i2)
	{
		if (i2 < i3)
			printf("%d", i2);
		else if (i2 > i3)
			printf("%d", i3);
	}
	return 0;
}
*/

//반복제어문1-자가진단1
/*
#include <stdio.h>
int main()
{
	int i = 1;

	while (i <= 15)
	{
		printf("%d ", i++);
	}

	return 0;
}
*/

//반복제어문1-자가진단2
/*
#include <stdio.h>
int main() {
	int N, count = 1, sum = 0;

	do {
		//printf("입력: ");
		scanf("%d", &N);
	} while ((N < 0) || N > 100);

	while (count <= N)
	{
		sum += count;
		count++;
	}

	printf("%d", sum);

	return 0;
}
*/

//출력-자가진단6
/*
#include <stdio.h>
int main()
{
	printf("My height\n170\nMy weight\n68.600000");

	return 0;
}
*/

//출력-자가진단7
/*
#include <stdio.h>
int main()
{
	int i = 5;

	printf("%d Dan", i);
	printf("\n%d * 2 = %d", i, i * 2);

	return 0;
}
*/

//출력-형성평가1
/*
#include <stdio.h>
int main()
{
	char a[10] = "Hong";

	printf("My name is %s", a);

	return 0;
}
*/

//출력-형성평가2
/*
#include <stdio.h>
int main()
{
	char a[20] = "Flowering mountain";

	printf("My hometown\n%s", a);

	return 0;
}
*/

//출력-형성평가 3
/*
#include <stdio.h>
int main()
{
	char T = 'T';

	printf("%c%c%c%c%c%c%c%c%c%c\n", T, T, T, T, T, T, T, T, T, T);
	printf("%c%c%c%c%c%c%c%c%c%c\n", T, T, T, T, T, T, T, T, T, T);
	printf("    %c%c\n", T,T);
	printf("    %c%c\n", T,T);
	printf("    %c%c\n", T,T);
	
	return 0;
}
*/

//출력-형성평가 4
/*
#include <stdio.h>
int main()
{
	int kor = 90, mat = 80, eng = 100;

	printf("kor %d\n", kor);
	printf("mat %d\n", mat);
	printf("eng %d\n", eng);
	printf("sum %d\n", kor+mat+eng);
	return 0;
}
*/

//출력-형성평가5 ->>>>>>>>>>>>>>>> 이차원 배열의 출력??!?!?!?
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char First[6][30] = { {"Seoul"},{"Pusan"},{"Incheon"},{"Daegu"},{"Gwangju"} };
	char Second[6][30] = { {"10,312,545"},{"3,567,910"},{"2,758,296"},{"2,511,676"},{"1,454,636"} };
	char Third[6][30] = { {"+91,375"},{"+5,868"},{"+64,888"},{"+17,230"},{"+29,774"} };

	for (int i = 0; i < 5; i++)
	{
		printf("%15s%15s%15s\n", *(First+i), *(Second+i), *(Third+i));
	}

	return 0;
}
*/

//입력-자가진단1
/*
#include <stdio.h>
int main()
{
	int i = -100;
	printf("%d", i);

	return 0;
}
*/

//입력-자가진단2
/*
#include <stdio.h>
int main()
{
	int i1 = -1, i2 = 100;
	printf("%d\n%d", i1, i2);

	return 0;
}
*/

//입력-자가진단3
/*
#include <stdio.h>
int main()
{
	int i1, i2;

	i1 = 55;
	i2 = 10;
	printf("%d - %d = %d\n", i1, i2, i1 - i2);
	i1 = 2008;
	i2 = 1999;
	printf("%d - %d = %d\n", i1, i2, i1 - i2);

	return 0;
}
*/

//입력-자가진단4
/*
#include <stdio.h>
int main()
{
	int weight;
	double ratio;

	weight = 49;
	ratio = 0.2683;

	printf("%d * %f = %lf", weight, ratio, (double)weight * ratio);

	return 0;
}
*/

//514:입력-자가진단6
/*
#include <stdio.h>
int main()
{
	int height;

	printf("height = ");
	scanf("%d", &height);
	printf("Your height is %dcm.", height);



	return 0;
}
*/

//515:입력-자가진단7
/*
#include <stdio.h>
int main()
{
	int i1, i2;
	scanf("%d %d", &i1, &i2);
	printf("%d * %d = %d\n", i1, i2, i1 * i2);
	printf("%d / %d = %d", i1, i2, i1 / i2);

	return 0;
}
*/

//516:입력-자가진단8 ->>>>>>>>>>>>>>>>>>>>>scanf에서 %c는 입력버퍼에 남은 것을 가져온다! 숫자형 형식지정자 입력버퍼 없앤다.
/*
#include <stdio.h>
int main()
{
	double i1, i2;
	char a;

	scanf("%lf%lf %c", &i1,&i2,&a);  
	//scanf("%lf", &i2);
	//scanf("%*c%c", &a);

	printf("%.2lf\n", i1);
	printf("%.2lf\n", i2);
	printf("%c\n", a);


	return 0;
}
*/

//517:입력-자가진단9
/*
#include <stdio.h>
int main()
{
	float f1, f2, f3;
	scanf("%f%f%f", &f1, &f2, &f3);
	printf("%.3f\n%.3f\n%.3f", f1, f2, f3);



	return 0;
}
*/

//106:입력-형성평가1
/*
#include <stdio.h>
int main()
{
	int i1 = 10, i2 = 20, i3 = 30;


	printf("%d + %d = %d", i1, i2, i3);



	return 0;
}
*/

//107:입력-형성평가2
/*
#include <stdio.h>
int main()
{
	float a = 80.5, b = 22.34;

	printf("%10.2f%10.2f%10.2f", a, b, a + b);

	return 0;
}
*/

//109:입력-형성평가4
/*
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("sum = %d", a + b + c);


	return 0;
}
*/

//110:입력-형성평가5
/*
#include <stdio.h>
int main()
{
	double yard;

	printf("yard? ");
	scanf("%lf", &yard);
	printf("%.1fyard = %.1fcm", yard, yard * 91.44);

	return 0;
}
*/

//518:연산자-자가진단1
/*
#include <stdio.h>
int main()
{
	int i1, i2, i3;
	scanf("%d%d%d", &i1, &i2, &i3);
	printf("sum : %d\n", i1 + i2 + i3);
	printf("avg : %d\n", (i1 + i2 + i3) / 3);

	return 0;
}
*/

//519:연산자-자가진단2
/*
#include <stdio.h>
int main()
{
	int i1, i2;
	scanf("%d %d", &i1, &i2);
	printf("%d %d", i1 += 100, i2 % 10);

	return 0;
}
*/

//523:연산자-자가진단6
/*
#include <stdio.h>
int main()
{
	int i1, i2;
	scanf("%d %d", &i1, &i2);
	printf("%d > %d --- %d\n", i1, i2, i1 > i2);
	printf("%d < %d --- %d\n", i1, i2, i1 < i2);
	printf("%d >= %d --- %d\n", i1, i2, i1 >= i2);
	printf("%d <= %d --- %d\n", i1, i2, i1 <= i2);
	return 0;

}
*/

//111:연산자-형성평가1
/*
#include <stdio.h>
int main()
{
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("sum %d\n", a + b + c + d);
	printf("avg %d\n", (a + b + c + d) / 4);

	return 0;
}
*/

//112:연산자-형성평가2
/*
#include <stdio.h>
int main()
{
	int i1, i2;
	scanf("%d %d", &i1, &i2);
	printf("%d / %d = %d...%d", i1, i2, i1 / i2, i1 % i2);

	return 0;
}
*/

//113:연산자-형성평가3
/*
#include <stdio.h>
int main()
{
	int w, l, a;
	
	scanf("%d %d", &w, &l);
	w += 5;
	l *= 2;
	a = w * l;
	printf("width = %d\n", w);
	printf("length = %d\n", l);
	printf("area = %d\n", a);
	return 0;
}
*/

//114:연산자-형성평가4
/*
#include <stdio.h>
int main()
{
	int i1, i2;
	scanf("%d %d", &i1, &i2);
	printf("%d %d\n", ++i1, i2--);
	printf("%d %d", i1, i2);

	return 0;
}
*/

//115:연산자-형성평가5
/*
#include <stdio.h>
int main() {
	int M1, M2, K1, K2;
	scanf("%d %d %d %d", &M1, &M2, &K1, &K2);
	//scanf("%d %d", &K1, K2);
	printf("%d", (M1 > K1) && (M2 > K2));

	return 0;
}
*/

//116:디버깅-형성평가1
/*
#include <stdio.h>
int main()
{
	int i1, i2, i3;
	double avg;
	scanf("%d %d %d", &i1, &i2, &i3);
	avg = (float)(i1 + i2 + i3) / 3;
	printf("%.1lf", avg);

	return 0;
}
*/

//117:디버깅-형성평가2
/*
#include <stdio.h>
int main()
{
	float a, b, c, avg;
	int sum;
	scanf("%f %f %f", &a, &b, &c);
	sum = (int)a + (int)b + (int)c;
	avg = sum / 3.0;
	printf("sum %d\n", sum);
	printf("avg %.f", avg);

	return 0;
}
*/

//528:선택제어문-자가진단1
/*
#include <stdio.h>
int main()
{
	int op;
	
	scanf("%d", &op);
	printf("%d\n", op);

	if (op < 0)
		printf("minus");

	return 0;
}
*/

//529:선택제어문-자가진단2
/*
#include <stdio.h>
int main()
{
	int height, weight, BMI;

	scanf("%d %d", &height, &weight);
	
	BMI = weight + 100 - height;
	printf("%d", BMI);
	if (BMI > 0)
		printf("\nObesity");


	return 0;
}
*/