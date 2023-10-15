#include <stdio.h>

int main() {
	int a, n;
	scanf("%d %d", &a, &n);
	int cnt = 0;
	int sum = 0;
	int i = 0;
	for ( ; cnt < n; cnt ++) {
		i = i * 10 + a;
		sum += i;
	}
	printf("%d", sum);

	return 0;
}