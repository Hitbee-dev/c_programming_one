#include <stdio.h>
#define TAX_RATE 0.12

int main() {
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("월급을 입력하세요(만원): ");
	scanf_s("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("연봉은 %d만원 입니다.\n", y_salary);
	printf("세금은 %lf만원 차감 됩니다.\n", y_salary * TAX_RATE);
	/* %뒤에 .0 .1 .2 ... 등을 붙이면 소수점 자리 수를 정할 수 있다. */
	//printf("세금은 %.0f만원 차감 됩니다.", y_salary * TAX_RATE);
	//printf("세금은 %d만원 차감 됩니다.", y_salary * TAX_RATE);

	return 0;
}