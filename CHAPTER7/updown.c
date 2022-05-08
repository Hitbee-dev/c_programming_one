#include <stdio.h>
int main(){
	int answer = 43;	// 정답
	int guess;
	int tries = 0;		// 시도 한 횟수
	
	do{
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer){
			printf("Down\n");
		}
		if (guess < answer){
			printf("Up\n");
		} 
	} while(guess != answer);
	// 추측한 정답이 맞지 않으면 계속 반복
	
	printf("축하합니다. 시도횟수는 %d번입니다.\n", tries);
	return 0;
}
