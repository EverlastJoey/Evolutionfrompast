#include <stdio.h>

int main() {
	int speed = 0;
	scanf("%d", &speed);
	if ( speed > 60 ) {
		printf("Speed:%d-speeding", speed);
	} else {
		printf("Speed:%d-OK", speed);
	}

	return 0;
}