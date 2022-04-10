/* 아래 코드에서 잘못된 점을 찾아보세요. */
/* sum 변수를 초기화를 해 주지 않아서 발생하는 문제 */
#include <stdio.h>

int main() {
	int x, y, z, sum;
	printf("3개의 정수를 입력하세요. (x, y, z):");
	scanf_s("%d %d %d", &x, &y, &z);
	sum += x;
	sum += y;
	sum += z;
	printf("3개 정수의 합은 %d\n", sum);
	return 0;
}