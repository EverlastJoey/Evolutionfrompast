/*输入两个整数a和n，a的范围是[0,9]，n的范围是[1,8]
  求数列之和S = a+aa+aaa+...+aaa...a（n个a）*/
#include <stdio.h>

int main(void) {
	int a, n;
	scanf("%d %d", &a, &n);
	int total = 0;
	int i = a;
	int cnt = 0;

	for (; cnt < n; cnt ++) {
		total += i;
		i = i * 10 + a;
	}

	printf("%d", total);

	return 0;
}