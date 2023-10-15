#include <stdio.h>

int main() {
	double height = 0;
	scanf("%lf", &height);
	double foot = height / (100 * 0.3048);
	int feet = height / (100 * 0.3048);
	int inch = (foot - feet) * 12;

	printf("%d³ß%d´ç", feet, inch);

	return 0;
}