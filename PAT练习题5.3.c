/*������������a��n��a�ķ�Χ��[0,9]��n�ķ�Χ��[1,8]
  ������֮��S = a+aa+aaa+...+aaa...a��n��a��*/
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