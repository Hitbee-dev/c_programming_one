/* ���� ������ ����ϴ� ���α׷� */

# include <stdio.h>

int main() {
	double pi = 3.141592;		// ������
	double radius;	// ���� ������
	double area;	// ���� ����

	printf("���� �������� �Է��ϼ���:");
	scanf_s("%lf", &radius);

	area = pi * radius * radius;
	printf("���� ����: %lf\n", area);
	return 0;
}
