#include <stdio.h>

int main() {
	int x, f;
	scanf("%d", &x);
	switch ( x > 0 ) {
		case 1:
			f = 2 * x;
			break;
		case 0:
			switch ( x = 0 ) {

				case 1:
					f = 0;
					break;
				case 0:
					f = -1;
					break;

			}
	}
	printf("%d", f);

	return 0;
}