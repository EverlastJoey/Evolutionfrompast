#include <stdio.h>

int main() {
	FILE *fp = fopen("elevator.txt", "r");
	if (fp) {
		int num;
		fscanf(fp, "%d", &num);
		printf("%d", num);
		fclose(fp);
	} else {
		printf("无法打开文件");
	}

	return 0;
}