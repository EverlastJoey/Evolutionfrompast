#include <stdio.h>

int main() {

	int price = 0;
	printf("�������Ԫ����");
	scanf("%d", &price);

	int amount = 0;
	printf("������Ʊ�棨Ԫ����");
	scanf("%d", &amount);

	int change = amount - price;
	printf("����%dԪ��\n", change);

	return 0;
}