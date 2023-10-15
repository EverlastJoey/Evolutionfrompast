/*计算序列 2/1+3/2+5/3+8/5+... 的前N项之和。
  注意该序列从第2项起，每一项的分子是前一项分子与分母的和，
  分母是前一项的分子*/
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	double sum = 0.0;
	double nume = 2.0;
	double deno = 1.0;
	int cnt = 0;
	double i;
	for ( ; cnt < n; cnt++) {
		i = nume;
		sum = sum + nume / deno;
		nume += deno;
		deno = i;
	}
	printf("%f", sum);

	return 0;
}