#include <stdio.h>

int main(void) {
	int a[13] = {[1] = 2, 4, [5] = 6};
	{
		int i;
		for (i = 0; i < 13; i++) {
			printf("%d\t", a[i]);
		}
		printf("\n");
	}

	return 0;
}