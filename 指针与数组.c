#include <stdio.h>

int main() {
	int a[] = {1, 2, 3, 4, 5,};
	int *p = a;
	int *q = &a;
	int *r = &a[0];
	printf("%p\n%p\n%p\n", p, q, r);

	return 0;
}