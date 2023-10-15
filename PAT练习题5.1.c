#include <stdio.h>

int main() {
	int nume, deno;
	scanf("%d/%d", &nume, &deno);
	int a = nume;
	int b = deno;
	int t;
	while (b > 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("%d/%d", nume / a, deno / a);
	return 0;
}