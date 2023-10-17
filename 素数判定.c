//判定用户输入的一个数字是否是素数
#include <stdio.h>

int main() {
	int x = 0;
	scanf("%d", &x);
	int prime = 1;
	for (int i = 2; i < x; i ++) {
		if (x % i == 0) {
			printf("x不是素数\n");
			prime = 0;
			break;
		}
	}
	if (prime == 1) {
		printf("x是素数\n");
	}

	return 0;
}