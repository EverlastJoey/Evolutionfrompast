//�ж��û������һ�������Ƿ�������
#include <stdio.h>

int main() {
	int x = 0;
	scanf("%d", &x);
	int prime = 1;
	for (int i = 2; i < x; i ++) {
		if (x % i == 0) {
			printf("x��������\n");
			prime = 0;
			break;
		}
	}
	if (prime == 1) {
		printf("x������\n");
	}

	return 0;
}