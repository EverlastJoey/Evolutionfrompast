#include <stdio.h>

int main() {
	const int size = 3;
	int board[size][size];
	int i, j; //iΪ�У�jΪ��
	int numOfX;
	int numOfO;
	int result = -1; //-1ƽ��1X��0O

	//�������
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	//���ÿ��
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

	//���ÿ��
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

	//������Խ���
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

	//��鷴�Խ���
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
			printf("XӮ��\n");
			break;
		case 0:
			printf("OӮ��\n");
			break;
		default:
			printf("ƽ��");
			break;
	}

	return 0;
}