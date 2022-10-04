#include <stdio.h>

int main()
{
	int input, tmp, tmp_u, tmp_o;
	scanf("%d", &input);

	tmp_u = 1;
	tmp_o = input/2;
	tmp = (int)(tmp_o / 2);

	while (1)
	{
		if (tmp * tmp == input) {	//제곱근 Search 완료
			break;
		}
		else if (tmp * tmp > input) {	//더 작은 값이 제곱근
			tmp_o = tmp;
			tmp = (int)(tmp / 2);
		}
		else if (tmp * tmp < input) {	//더 큰 값이 제곱근
			tmp_u = tmp;
			tmp = tmp_u + (int)((tmp_o - tmp_u) / 2);
		}

		//정수부분을 찾았는지 검증
		if (tmp_o - tmp_u == 2) {
			tmp = tmp_o - 1;
			break;
		}
	}
	
	printf("%d", tmp);

	return 0;
}