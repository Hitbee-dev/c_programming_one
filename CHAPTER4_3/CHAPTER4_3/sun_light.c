#include <stdio.h>
int main() {
	double light_speed = 300000;	// ���� �ӵ��� 300000km/s
	double distance = 149600000;	// �¾�� ���� ���� �Ÿ��� 149,600,000km

	int time;
	int min, sec;

	time = distance / light_speed;	// �żӽ� ����? �׷� �ð� = �Ÿ�/�ӵ�
	min = time / 60;				// ��
	sec = time % 60;				// ��
	printf("���� �ӵ��� %lfkm/s \n", light_speed);
	printf("�¾�� ���� ������ �Ÿ��� %lfkm \n", distance);
	printf("�¾� ���� �������� ���µ� �ɸ��� �ð��� %d�� %d�� \n", min, sec);
	return 0;
}