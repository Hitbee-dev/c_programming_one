# include<stdio.h>

int main() {
	int x = 10;		// 10����
	int y = 010;	// 8����
	int z = 0x10;	// 16����

	/*
		10���� �տ� 0�� ���̸� 8����
		10���� �տ� 0x�� ���̸� 16����
	*/

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);
	return 0;
}