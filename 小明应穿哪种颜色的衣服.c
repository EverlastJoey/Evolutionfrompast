#include <stdio.h>

int main() {
	printf("�������·���ɫ������С���ڶ����е���λ");
	int colour = 0;
	int number = 0;
	scanf("%d %d", &colour, &number);
	printf("С��Ӧ����%d����ɫ���·�", number % colour);

	return 0;
}