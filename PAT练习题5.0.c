/*�������� 2/1+3/2+5/3+8/5+... ��ǰN��֮�͡�
  ע������дӵ�2����ÿһ��ķ�����ǰһ��������ĸ�ĺͣ�
  ��ĸ��ǰһ��ķ���*/
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