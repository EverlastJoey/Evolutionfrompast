#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	int one, two, five;
	for (one = 1; one < 10 * x; one++) {
		for (two = 1; two < x * 10 / 2 ; two++) {
			for (five = 1; five < x * 10 / 5 ; five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("%d¸ö1£¬%d¸ö2£¬%d¸ö5\n", one, two, five);
				}
			}
		}
	}

	return 0;
}