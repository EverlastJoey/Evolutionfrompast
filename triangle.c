#include <stdio.h>

int main(void) {
	int i, j;
	for (i = 0; i < 5; i ++) {
		printf("\n");
		for (j = 0; j < 5 - i; j ++) {
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1; j ++) {
			printf("*");
		}
	}
	return 0;
}