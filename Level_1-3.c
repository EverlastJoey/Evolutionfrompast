#include <stdio.h>

void comp(int dis[], int *min, int *minAt, int *toWhere) ;

int main() {
	const int high = 10;
	int eleAt;                             //��������¥��
	int atWhere[high];                     //�˿�����¥��
	int toWhere[high];                     //�˿�Ŀ��¥��
	int amount[high];                      //ÿ¥Ӧ�³˿���
	int eleDir = 0;                        //�������з���
	for (int j = 0; j < high; j++) {
		amount[j] = atWhere[j] = toWhere[j] = 0;
	}
	printf("�����������ʼ¥��\n");
	scanf("%d", &eleAt);
	eleAt --;

	printf("���һ¥��ʼ����˿���Ϣ��ĩβ����0����ֹ��Ϣ���룬ȥ��¥������0��ʾ�ò��޳˿�\n");
	int i;
	int judge[10];                 //judge�����Ӻδ���ʼ�����ĳ˿�������Ч
	for (i = 0; judge[i] = 1 && i < high; i ++) {
		scanf("%d %d %d", &atWhere[i], &toWhere[i], &judge[i]);
		atWhere[i] --;
		toWhere[i] --;
		if (judge[i] == 0) {
			break;
		}
	}
	printf("\n");

	int dir[high];                //�ж�ÿλ�˿��ƶ�����,1��2��
	for (int k = 0; k < high; k++) {
		dir[k] = 0;
	}
	for (i = 0; i < high; i ++) {
		if (atWhere[i] < toWhere[i]) {
			dir[i] = 1;
		} else if (atWhere[i] > toWhere[i]) {
			dir[i] = 2;
		} else {
			break;
		}
	}

	int x = 0;                      //��·��
	int people = 0;                 //�ؿ���
	int max;                        //�����ڳ˿͵����Ŀ��¥����

	printf("first %d %d %d\n", eleAt + 1, x, people);

	int start = 0;                  //����ĵط�
	do {                            //��������ģʽ
		if (start = 1) {
			if (eleDir == 1) {
				eleAt ++;
			} else if (eleDir == 2) {
				eleAt --;
			}
			x ++;
		}
		people -= amount[eleAt];
		amount[eleAt] = 0;
		if (people <= 4 && atWhere[eleAt] == 1) {
			atWhere[eleAt] --;
			toWhere[eleAt] = 0;
			people ++;
		}
		if (people == 0) {          //�ؿ���Ϊ0ʱѰ������˿Ͳ�ǰ��
			int dis[10];
			for (i = 0; i < high; i++) {
				if (atWhere[i] > eleAt) {
					dis[i] = atWhere[i] - eleAt;
				} else if (atWhere[i] < eleAt) {
					dis[i] = eleAt - atWhere[i];
				} else {
					dis[i] = 0;
				}
			}
			int min;
			int minAt;
			comp(dis, &min, &minAt, toWhere);
			if (minAt > eleAt) {
				x += minAt - eleAt;
			} else if (minAt < eleAt) {
				x += eleAt - minAt;
			}
			if (toWhere[minAt] = 0) {
				printf("over\n");
				goto over;
			}
			eleDir = dir[minAt];
			max = toWhere[eleAt];
			eleAt = minAt;
			people ++;
			printf("second%d %d %d\n", eleAt + 1, x, people);
			if (eleDir == 1) {
				goto ifUp;
			} else if (eleDir == 2) {
				goto ifDown;
			}
			start = 1;
		}
ifUp:
		if (max < toWhere[eleAt]) {
			max = toWhere[eleAt];
		}
		amount[toWhere[eleAt]] ++;

ifDown:
		if (max > toWhere[eleAt]) {
			max = toWhere[eleAt];
		}
		amount[toWhere[eleAt]] ++;

		printf("circle%d %d %d\n", eleAt + 1, x, people);

		if (people == 0) {
			start = 0;
		}
	} while (eleAt <= max);

over:
	return 0;
}

void comp(int dis[], int *min, int *minAt, int *toWhere) {
	int i;
	for (i = 1, *min = dis[0]; i < 10; i++) {
		if (dis[i] < *min && toWhere != 0) {
			//Ϊʲôû�н����if��䣿
			*min = dis[i];
			*minAt = i;
		}
	}
};