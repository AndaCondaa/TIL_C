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
		if (tmp * tmp == input) {	//������ Search �Ϸ�
			break;
		}
		else if (tmp * tmp > input) {	//�� ���� ���� ������
			tmp_o = tmp;
			tmp = (int)(tmp / 2);
		}
		else if (tmp * tmp < input) {	//�� ū ���� ������
			tmp_u = tmp;
			tmp = tmp_u + (int)((tmp_o - tmp_u) / 2);
		}

		//�����κ��� ã�Ҵ��� ����
		if (tmp_o - tmp_u == 2) {
			tmp = tmp_o - 1;
			break;
		}
	}
	
	printf("%d", tmp);

	return 0;
}