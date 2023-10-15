#include <stdio.h>

int main() {
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个随机数\n");
	do {
		printf("请猜一个数");
		scanf("%d", &a);
		count++;
		if ( a > number ) {
			printf("您猜的数偏大");
		} else if (a < number) {
			printf("您猜的数偏小");
		}
	} while ( a != number);

	printf("答案是%d，您猜对了，共%d次", number, count);

	return 0;
}