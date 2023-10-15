//本题要求统计给定整数M和N区间内素数的个数并对它们求和。
#include <stdio.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	if (m == 1) {
		m = 2;
	}
	int cnt = 0;
	int i = m;
	int sum = 0;
	for ( ; i <= n; i++) { //遍历m到n
		int j = 2;
		int judge = 1;
		for ( ; j < i - 1; j++) { //判定素数
			if (i % j == 0) {
				judge = 0;
				break;
			}
		}
		if (judge == 1) {
			cnt ++;
			sum += i;
		}
	}
	printf("%d %d", cnt, sum);

	return 0;

}