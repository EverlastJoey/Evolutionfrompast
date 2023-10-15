#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	if (num < 0) {
		printf("fu");
		num = -num;
	}
	int i = num;
	int mask = 1;
	for ( ; i > 9; i /= 10) { //得到与num位数相同的除数用以从头分解num
		mask *= 10;
	}
	for ( ; num > 0; mask /= 10) {
		int j = num / mask;
		switch (j) {
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			default:
				printf("jiu");
		}
		if (mask > 9) {
			printf(" ");
		}
		num %= mask;
	}
	return 0;
}