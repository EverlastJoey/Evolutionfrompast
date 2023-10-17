#include <stdio.h>

int main(void) {
	int month = 0;
	char *a[12] = {
		"January",
		"February",
		"May",
		"April",
		"March",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December",
	};
	printf("«Î ‰»Î‘¬∑›£∫");
	scanf("%d", &month);
	month --;
	printf("%s", a[month]);

	return 0;
}