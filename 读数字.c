//����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ���������fu���֡�
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	int j = num;
	int k, num1;
	for ( ; j > 0; j / 10) { //�����ַ�ת
		k = j % 10;
		num1 = num1 * 10 + k;
	}
	num = num1;
	int i;
	for ( ; num > 0; num /= 10) { //��ʼ����һ���������ƴ��
		i = num % 10;
		switch (i) {
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			default:
				printf("jiu");
		}
		printf(" ");
	}
	return 0;
}