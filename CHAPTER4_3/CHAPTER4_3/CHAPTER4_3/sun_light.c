#include <stdio.h>
int main() {
	double light_speed = 300000;	// 빛의 속도는 300000km/s
	double distance = 149600000;	// 태양과 지구 사이 거리는 149,600,000km

	int time;
	int min, sec;

	time = distance / light_speed;	// 거속시 알죠? 그럼 시간 = 거리/속도
	min = time / 60;				// 분
	sec = time % 60;				// 초
	printf("빛의 속도는 %lfkm/s \n", light_speed);
	printf("태양과 지구 사이의 거리는 %lfkm \n", distance);
	printf("태양 빛이 지구까지 오는데 걸리는 시간은 %d분 %d초 \n", min, sec);
	return 0;
}