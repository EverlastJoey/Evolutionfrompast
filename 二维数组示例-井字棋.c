#include <stdio.h>

int main() {
	const int size = 3;
	int board[size][size];
	int i, j; //i为行，j为列
	int numOfX;
	int numOfO;
	int result = -1; //-1平，1X，0O

	//读入矩阵
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	//检测每行
	for (i = 0; i < size && result == -1; i++) {
		numOfO = numOfX = 0;
		for (j = 0; j < size; j++) {
			if (board[i][j] == 1) {
				numOfX ++;
			} else {
				numOfO ++;
			}
		}
	}
	if (numOfO == size) {
		result = 0;
	} else if (numOfX == size) {
		result = 1;
	}

	//检测每列
	if (result == -1) {
		for (j = 0; j < size && result == -1; j++) {
			numOfO = numOfX = 0;
			for (i = 0; i < size; i++) {
				if (board[i][j] == 1) {
					numOfX ++;
				} else {
					numOfO ++;
				}
			}
		}
		if (numOfO == size) {
			result = 0;
		} else if (numOfX == size) {
			result = 1;
		}
	}

	//检查正对角线
	if (result == -1) {
		numOfO = numOfX = 0;
		for (i = 0; i < size; i++) {
			if (board[i][j] == 1) {
				numOfX ++;
			} else {
				numOfO ++;
			}
		}
		if (numOfO == size) {
			result = 0;
		} else if (numOfX == size) {
			result = 1;
		}
	}

	//检查反对角线
	if (result == -1) {
		numOfO = numOfX = 0;
		for (i = 0; i < size; i++) {
			if (board[i][size - i - 1] == 1) {
				numOfX ++;
			} else {
				numOfO ++;
			}
		}
	}

	switch (result) {
		case 1:
			printf("X赢了\n");
			break;
		case 0:
			printf("O赢了\n");
			break;
		default:
			printf("平局");
			break;
	}

	return 0;
}