/*写一个程序，输入数量不确定的[0,9]范围内的整数
  统计每一种数字出现的次数，输入-1表示结束*/
#include <stdio.h>

int main() {
	const int number = 10;
	int x;
	int count[number];
	int i;
	for (i = 0; i <= number; i ++) {
		count[i] = 0;
	}
	scanf("%d", &x);
	while (i != -1) {
		if (x >= 0 && x <= 9) {
			count[x] ++;
		}
		scanf("%d", &x);
	}
	for (i = 0; i <= number; i ++) {
		printf("%d:%d\n", i, count[i]);
	}

	return 0;
}