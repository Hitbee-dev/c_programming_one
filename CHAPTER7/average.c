#include <stdio.h>

int main(){
	int grade, n;
	double sum, average;
	
	// 사용 할 변수를 초기화한다.
	grade = 0;	// 성적
	n = 0;			// 입력받은 과목의 개수
	sum = 0;		// 성적 합

	printf("종료하려면 음수를 입력하시오\n");

	//성적을 입력받아서 합계를 구하고 학생 수를 센다.
	while(grade >= 0){
		printf("성적을 입력하시오: ");
		scanf("%d", &grade);

		sum += grade;
		// 총 점수에 방금 입력받은 성적을 더해준다.
		n++;
		// 1과목 추가될 때 마다 +1
	}
	
	sum = sum - grade;
	n--;
	// 반복문 종료를 위해 들어온 값과, 과목 수를 1개 빼준다.

	average = sum / n;
	printf("성적의 평균은 %f입니다.\n", average);

	return 0;
}
