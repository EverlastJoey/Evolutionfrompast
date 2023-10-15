#include <stdio.h>

int main() {
	//f(n)=1- 1/2 + 1/3 -... + 1/n的前n项求和
	int n, x;
	scanf("%d", &x);
	double sign = 1.0;
	double f = 0.0;
	for (n = 1; n < x; n++) {
		f += sign / n;
		sign = -sign;
	}
	printf("前%d项的和为%f", x, f);

	return 0;
}