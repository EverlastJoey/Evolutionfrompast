#include <stdio.h>

int main() {
	/*x为从2开始被检测的数
	  i为检测素数所用的除数
	  cnt用以记录输出的素数个数*/
	int x;
	int i = 2;
	int cnt = 0;
	/*第一个for挨个运行x并在输出50个素数后结束
	  第二个for则检测被运行的x是否为素数*/
	for (x = 2; cnt < 50; x++) {
		int isPrime = 1;
		//isPrime为输出素数过程用到的逻辑工具变量
		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			printf("%d ", x);
			cnt++;
		}
	}
	printf("\n");

	return 0;
}