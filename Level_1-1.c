//�û�����A B C��ʾ��A����һ�˵Ⱥ���ݵ���B���Լ����ݴ�ʱ���ڵĲ���C
#include <stdio.h>

int main() {
	int towhere;                        //Ŀ��¥��
	int atwhere;                        //����¥��
	int eleAt;                          //�������
	scanf("%d %d %d", &atwhere, &towhere, &eleAt);
	int amount = 0;                     //�ؿ���
	int time = 0;                       //����ʱ��
	int direction = 0;                  //1��2��0����

	printf("%d %d %d\n", eleAt, time, amount); //�ӿ�
	if (atwhere > eleAt) {
		direction = 1;
	} else if (atwhere < eleAt) {
		direction = 2;
	}
	switch (direction) {
		case 1:
			time += atwhere - eleAt;
			break;
		case 2:
			time += eleAt - atwhere;
			break;
	}
	amount ++;
	eleAt = atwhere;
	printf("%d %d %d\n", eleAt, time, amount);

	if (towhere > eleAt) { //�Ϳ�
		direction = 1;
	} else {
		direction = 2;
	}
	switch (direction) {
		case 1:
			time += towhere - eleAt;
			break;
		case 2:
			time += eleAt - towhere;
	}
	amount --;
	eleAt = towhere;
	printf("%d %d %d\n", eleAt, time, amount);

	return 0;
}