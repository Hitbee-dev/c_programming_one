#include <stdio.h>
int main() {
	const double pi = 3.141592;
	double radius = 5;
	double area;
	//pi = 100;
	area = radius * radius * pi;
	printf("원의 반지름은 %lf이고, 원의 넓이는 %lf입니다.", radius, area);
	return 0;
}