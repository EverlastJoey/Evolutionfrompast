#include <stdio.h>

void comp(int dis[], int *min, int *minAt, int *toWhere) ;

int main() {
	const int high = 10;
	int eleAt;                             //电梯所在楼层
	int atWhere[high];                     //乘客所在楼层
	int toWhere[high];                     //乘客目的楼层
	int amount[high];                      //每楼应下乘客数
	int eleDir = 0;                        //电梯运行方向
	for (int j = 0; j < high; j++) {
		amount[j] = atWhere[j] = toWhere[j] = 0;
	}
	printf("请输入电梯起始楼层\n");
	scanf("%d", &eleAt);
	eleAt --;

	printf("请从一楼开始输入乘客信息，末尾输入0以终止信息输入，去向楼层输入0表示该层无乘客\n");
	int i;
	int judge[10];                 //judge表明从何处开始后续的乘客数据无效
	for (i = 0; judge[i] = 1 && i < high; i ++) {
		scanf("%d %d %d", &atWhere[i], &toWhere[i], &judge[i]);
		atWhere[i] --;
		toWhere[i] --;
		if (judge[i] == 0) {
			break;
		}
	}
	printf("\n");

	int dir[high];                //判断每位乘客移动方向,1上2下
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

	int x = 0;                      //总路程
	int people = 0;                 //载客量
	int max;                        //电梯内乘客的最高目的楼层数

	printf("first %d %d %d\n", eleAt + 1, x, people);

	int start = 0;                  //最蠢的地方
	do {                            //电梯运行模式
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
		if (people == 0) {          //载客量为0时寻找最近乘客并前往
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
			//为什么没有进入此if语句？
			*min = dis[i];
			*minAt = i;
		}
	}
};