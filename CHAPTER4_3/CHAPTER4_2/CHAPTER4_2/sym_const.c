#include <stdio.h>
#define TAX_RATE 0.12

int main() {
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("������ �Է��ϼ���(����): ");
	scanf_s("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("������ %d���� �Դϴ�.\n", y_salary);
	printf("������ %lf���� ���� �˴ϴ�.\n", y_salary * TAX_RATE);
	/* %�ڿ� .0 .1 .2 ... ���� ���̸� �Ҽ��� �ڸ� ���� ���� �� �ִ�. */
	//printf("������ %.0f���� ���� �˴ϴ�.", y_salary * TAX_RATE);
	//printf("������ %d���� ���� �˴ϴ�.", y_salary * TAX_RATE);

	return 0;
}