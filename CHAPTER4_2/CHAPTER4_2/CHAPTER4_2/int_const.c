# include<stdio.h>

int main() {
	int x = 10;		// 10진수
	int y = 010;	// 8진수
	int z = 0x10;	// 16진수

	/*
		10진수 앞에 0을 붙이면 8진수
		10진수 앞에 0x를 붙이면 16진수
	*/

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);
	return 0;
}