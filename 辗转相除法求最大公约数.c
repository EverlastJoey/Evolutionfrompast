/*1.��b=0,��aΪ���Լ��
  2.����ȡt=a%b��a=b��b=t
  3.�ص�1*/
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int t;
	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("���Լ��Ϊ%d", a);

	return 0;
}