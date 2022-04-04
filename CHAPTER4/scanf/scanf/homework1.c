#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 10;
	int b;
	printf("b의 값:");
	scanf("%d", &b);
	printf("변하지 않는 a: %d\n", a);
	printf("언제든지 변할 수 있는 b: %d\n", b);
}