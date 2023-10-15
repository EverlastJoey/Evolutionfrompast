#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int n = N % 5;
	if (n == 0) {
		printf("Drying in day%d", N);
	} else if (n < 4) {
		printf("Fishing in day%d", N);
	} else {
		printf("Drying in day%d", N);
	}

	return 0;
}