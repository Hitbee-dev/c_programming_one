/* pp 117 salary.c
/* 월 수령액을 계산하는 프로그램*/
/* 월 수령액을 계산하는 프로그램 */
/* 연봉을 입력하시오(단위: 만원): 5000
   월수령액(단위: 만원): 416
   근무 년(예: 6.5):

   5000, 6.5 / 6000, 10 / 5000, 10
   */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int ysalary; // 연봉
	int msalary; // 월 수령액
	float work_period;
	int total;

	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;
	printf("월 수령 액(단위: 만원): %d\n", msalary);

	printf("몇 년간 일했는지 (예: 6.5 or 3.0): ");
	scanf("%f", &work_period);
	total = msalary * work_period * 12;
	printf("현재까지 수령한 금액: %d\n", total);

	return 0;
}