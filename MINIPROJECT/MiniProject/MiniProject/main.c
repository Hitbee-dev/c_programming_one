#include <stdio.h>

int info() {
	int programs;
	printf("������ ���α׷��� �Է� �� �ּ���.\n");
	printf("0: ����\n1: ������\n2: ����\n������ ���α׷�: ");
	scanf_s("%d", &programs);

	return programs;
}

int gugudan() {
	printf("\t�ڱ����� ���α׷� �����\n\n");
	return 0;
}

int calculator() {
	printf("\t�ڰ��� ���α׷� �����\n\n");

	return 0;
}

int main() {
	int flag = 0;
	while (flag == 0) {
		int check = 0;
		check = info();
		if (check == 0) {
			flag = 1;
			printf("\t�����α׷��� �����մϴ�.��\n");
		}
		else if (check == 1) {
			gugudan();
		}
		else if (check == 2) {
			calculator();
		}
		else {
			printf("\nWarning! �߸��� ���ڸ� �Է� �߽��ϴ�. �ٽ� �Է� �� �ּ���.\n\n");
		}
	}

	return 0;
}