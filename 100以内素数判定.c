#include <stdio.h>

int main() {

	int x;
	int Isprime = 1;
	for (x = 100; x > 1; x--) {

		for (int i = 2; i < x; i++) {
			Isprime = 1;
			if (x % i == 0) {
				Isprime = 0;
				break;
			}
		}
		if (Isprime == 1) {
			printf("%d\n", x);
		}
	}

	return 0;
}
