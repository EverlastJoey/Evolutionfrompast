#include <stdio.h>

int main() {
	int number = 0;
	int digit = 0;
	int ret = 0;
	scanf("%d", &number);
	while ( number > 0 ) {
		digit = number % 10;
		printf("digit=%d ", digit);
		ret = ret * 10 + digit;
		printf("ret=%d ", ret);
		number /= 10;
		printf("number=%d\n", number);
	}
	printf("ret=%d\n", ret);

	return 0;
}