//����Ҫ��ͳ�Ƹ�������M��N�����������ĸ�������������͡�
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
	for ( ; i <= n; i++) { //����m��n
		int j = 2;
		int judge = 1;
		for ( ; j < i - 1; j++) { //�ж�����
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