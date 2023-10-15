#include <stdio.h>

int main() {
	int number = 0;
	scanf("%d", &number);
	printf("%d", number / 100 + (number - number / 100 * 100) / 10 * 10 + ((number - number / 100 * 100) -
	        (number - number / 100 * 100) / 10 * 10) * 100);
	return 0;
}