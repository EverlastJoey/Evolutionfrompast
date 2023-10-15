#include <stdio.h>

int main() {
	int hour24, hour12, minute;
	scanf("%d:%d", &hour24, &minute);
	if (hour24 >= 12) {
		hour12 = hour24 - 12;
		printf("%d:%dPM", hour12, minute);
	} else {
		hour12 = hour24;
		printf("%d:%dAM", hour12, minute);
	}

	return 0;
}