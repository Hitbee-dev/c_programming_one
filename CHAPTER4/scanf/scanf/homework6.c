#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double rate; // ��/�޷� ȯ��
	double usd;  // �޷�ȭ
	int krw;     // ��ȭ

	printf("ȯ���� �Է��Ͻÿ�: ");
	scanf("%lf", &rate);

	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d���� %f�޷��Դϴ�.\n", krw, usd);
	return 0;
}