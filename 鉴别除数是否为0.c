#include <stdio.h>

//除法成功，返回1；否则返回0

int divide(int a, int b, int *result);

int main(void) {
	int a;
	int b;
	scanf("%d %d", &a, &b);
	int c;
	if (divide(a, b, &c)) {
		printf("%d/%d = %d\n", a, b, c);
	}
	return 0;
}

int divide(int a, int b, int *result) {
	int ret = 1;
	if (b == 0) {
		ret = 0;
	} else {
		*result = a / b;
	}
	return ret;
}