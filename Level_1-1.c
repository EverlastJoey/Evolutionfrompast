//用户输入A B C表示第A层有一人等候电梯到第B层以及电梯此时所在的层数C
#include <stdio.h>

int main() {
	int towhere;                        //目的楼层
	int atwhere;                        //所在楼层
	int eleAt;                          //电梯起点
	scanf("%d %d %d", &atwhere, &towhere, &eleAt);
	int amount = 0;                     //载客量
	int time = 0;                       //运行时间
	int direction = 0;                  //1上2下0不动

	printf("%d %d %d\n", eleAt, time, amount); //接客
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

	if (towhere > eleAt) { //送客
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