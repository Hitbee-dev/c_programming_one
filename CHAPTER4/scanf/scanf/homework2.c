/* pp 116 add2.c
   - scanf 의 delimiter. 10 20 / 10 return 20 / 10    20 / 10,20 / 10, 20
   - 기본
   - 빼기, 곱하기, 나누기 연산 및 결과 추가
*/

/* 사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int x, y, sum, diff, mul, div;

	/*scanf("%d%d", &x, &y);
	printf("%d, %d", x, y); */
	printf("첫 번째 숫자를 입력하시오: ");
	scanf("%d", &x);
	printf("두 번째 숫자를 입력하시오: ");
	scanf("%d", &y);

	sum = x + y;
	printf("두 수의 합: %d\n", sum);
	diff = x - y;
	printf("두 수의 차: %d\n", diff);
	mul = x * y;
	printf("두 수의 곱: %d\n", mul);
	div = x / y;
	printf("두 수의 나누기: %d\n", div);

	return 0;
}