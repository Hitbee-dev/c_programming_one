/* pp 116 add2.c
   - scanf �� delimiter. 10 20 / 10 return 20 / 10    20 / 10,20 / 10, 20
   - �⺻
   - ����, ���ϱ�, ������ ���� �� ��� �߰�
*/

/* ����ڷκ��� �Է¹��� 2���� ������ ���� ����Ͽ� ��� */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int x, y, sum, diff, mul, div;

	/*scanf("%d%d", &x, &y);
	printf("%d, %d", x, y); */
	printf("ù ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &y);

	sum = x + y;
	printf("�� ���� ��: %d\n", sum);
	diff = x - y;
	printf("�� ���� ��: %d\n", diff);
	mul = x * y;
	printf("�� ���� ��: %d\n", mul);
	div = x / y;
	printf("�� ���� ������: %d\n", div);

	return 0;
}