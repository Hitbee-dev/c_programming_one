#include <stdio.h>

int info() {
	int programs;
	printf("실행할 프로그램을 입력 해 주세요.\n");
	printf("0: 종료\n1: 구구단\n2: 계산기\n실행할 프로그램: ");
	scanf_s("%d", &programs);

	return programs;
}

int gugudan() {
	printf("\t★구구단 프로그램 실행★\n\n");
	return 0;
}

int calculator() {
	printf("\t★계산기 프로그램 실행★\n\n");

	return 0;
}

int main() {
	int flag = 0;
	while (flag == 0) {
		int check = 0;
		check = info();
		if (check == 0) {
			flag = 1;
			printf("\t★프로그램을 종료합니다.★\n");
		}
		else if (check == 1) {
			gugudan();
		}
		else if (check == 2) {
			calculator();
		}
		else {
			printf("\nWarning! 잘못된 숫자를 입력 했습니다. 다시 입력 해 주세요.\n\n");
		}
	}

	return 0;
}