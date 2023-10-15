#include <stdio.h>

int main() {
	int time1 = 0;
	int minute = 0;
	scanf("%d %d", &time1, &minute);
	int time2 = time1 + minute / 60 * 100 + minute % 60;
	printf("%d", (time2 / 100 * 60 + time2 % 100) / 60 * 100 + (time2 / 100 * 60 + time2 % 100) % 60);
	return 0;
}