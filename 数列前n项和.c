#include <stdio.h>

int main() {
	//f(n)=1- 1/2 + 1/3 -... + 1/n��ǰn�����
	int n, x;
	scanf("%d", &x);
	double sign = 1.0;
	double f = 0.0;
	for (n = 1; n < x; n++) {
		f += sign / n;
		sign = -sign;
	}
	printf("ǰ%d��ĺ�Ϊ%f", x, f);

	return 0;
}