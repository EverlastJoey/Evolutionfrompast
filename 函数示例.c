#include <stdio.h>

void sum(int begin, int end) {
	int i;
	int sum = 0;
	for (i = begin; i <= end; i++) {
		sum += i;
	}
	printf("%d��%d�ĺ�Ϊ%d\n", begin, end, sum);
}

int main() {
	sum(0, 10);
	sum(10, 20);
	sum(35, 45);

	return 0;
}