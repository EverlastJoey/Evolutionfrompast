#include <stdio.h>

int main() {
	int n;
	int i = 1;
	int factor = 1;
	scanf("%d", &n);
	while (i != n + 1) {
		factor *= i;
		i ++;
	}
	printf("n!=%d", factor);

	return 0;
}