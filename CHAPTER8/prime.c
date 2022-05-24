#include <stdio.h>

int get_integer(){

	int n;
	printf("정수를 입력하시요: ");
	scanf("%d",&n);
	return n;
}

int is_prime(int n){
	for (int i = 2; i < n; i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n, result;
	n = get_integer();

	if (is_prime(n) == 1){
		printf("%d는 소수입니다.\n",n);
	}
	else{
		printf("%d는 소수가 아닙니다.\n",n);
	}
	return 0;
}
