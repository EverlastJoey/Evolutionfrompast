#include <stdio.h>

int main() {
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ�������\n");
	do {
		printf("���һ����");
		scanf("%d", &a);
		count++;
		if ( a > number ) {
			printf("���µ���ƫ��");
		} else if (a < number) {
			printf("���µ���ƫС");
		}
	} while ( a != number);

	printf("����%d�����¶��ˣ���%d��", number, count);

	return 0;
}