#include <stdio.h>

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (A != B) {
		if (A != C) {
			printf("A");
		} else {
			printf("B");
		}
	} else {
		printf("C");
	}

	return 0;
}