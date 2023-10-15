#include <stdio.h>

int main() {
	int number = 0;
	scanf("%d", &number);
	printf("%d", number / 16 * 10 + number % 16);
	return 0;
}