#include <stdio.h>

int main() {
	/*xΪ��2��ʼ��������
	  iΪ����������õĳ���
	  cnt���Լ�¼�������������*/
	int x;
	int i = 2;
	int cnt = 0;
	/*��һ��for��������x�������50�����������
	  �ڶ���for���ⱻ���е�x�Ƿ�Ϊ����*/
	for (x = 2; cnt < 50; x++) {
		int isPrime = 1;
		//isPrimeΪ������������õ����߼����߱���
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