/* pp 117 salary.c
/* �� ���ɾ��� ����ϴ� ���α׷�*/
/* �� ���ɾ��� ����ϴ� ���α׷� */
/* ������ �Է��Ͻÿ�(����: ����): 5000
   �����ɾ�(����: ����): 416
   �ٹ� ��(��: 6.5):

   5000, 6.5 / 6000, 10 / 5000, 10
   */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int ysalary; // ����
	int msalary; // �� ���ɾ�
	float work_period;
	int total;

	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;
	printf("�� ���� ��(����: ����): %d\n", msalary);

	printf("�� �Ⱓ ���ߴ��� (��: 6.5 or 3.0): ");
	scanf("%f", &work_period);
	total = msalary * work_period * 12;
	printf("������� ������ �ݾ�: %d\n", total);

	return 0;
}