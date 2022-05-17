#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int init_money = 50;
    int goal = 250;
    int i;
    int wins = 0;
    int games = 100;

    srand(time(NULL));
    for(i=0; i<games; i++){
        int cash = init_money;
        while(cash > 0 && cash < goal){
            if (((double)rand() / RAND_MAX) < 0.5) {
                cash++;
            } else {
                cash--;
            }
        }
        if (cash == goal) {
            wins++;
        }
    }

    printf("초기 급액 $%d\n", init_money);
    printf("목표 금액 $%d\n", goal);
    printf("100번 중 %d번 성공\n", wins);

    return 0;
}