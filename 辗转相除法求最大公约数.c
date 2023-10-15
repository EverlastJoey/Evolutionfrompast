/*1.若b=0,则a为最大公约数
  2.否则，取t=a%b，a=b，b=t
  3.回到1*/
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int t;
	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("最大公约数为%d", a);

	return 0;
}