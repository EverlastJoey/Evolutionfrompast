#include <stdio.h>

int main() {
	int x; //x被分解
	scanf("%d", &x);
	int t = x; //t充当第二次使用的x
	int b = 1; //b用于 / 与 % 中分解x
	while (x > 9) {
		x /= 10;
		b *= 10;
	}
	/*分解数字的逻辑如下
	  13425/10000=1（得到左一并输出）
	  13425%10000=3425（去掉左一）
	  10000/10=1000（准备下一轮）
	  3425/1000=3（自此重复）*/
	for ( ; b > 0; b /= 10) {
		int m = t / b; //m即被输出的左一
		printf("%d", m);
		t %= b;
		if (b > 9) {
			printf(" ");
		}
	}

	return 0;
}