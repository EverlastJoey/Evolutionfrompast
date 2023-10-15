#include <stdio.h>

int main() {
	printf("请输入衣服颜色总数和小明在队列中的排位");
	int colour = 0;
	int number = 0;
	scanf("%d %d", &colour, &number);
	printf("小明应穿第%d种颜色的衣服", number % colour);

	return 0;
}