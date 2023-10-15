#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int n = N % 5;
	switch (n == 0) {
		case 1:
			printf("Drying in day%d", N);
			break;
		case 0:
			switch (n > 3) {
				case 1:
					printf("Drying in day%d", N);
					break;
				case 0:
					printf("Fishing in day%d", N);
					break;
			}
	}
	return 0;
}