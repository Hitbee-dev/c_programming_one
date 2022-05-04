#include <stdio.h>
int main(){
	// 연산자는 영어로 operator라고 해요.
	// 그래서 op라는 변수를 만들어주고.
	char op;	
	// 연산을 진행할 x값 y값 결과값 3개를 써야하니까 변수도 3개를 만들어 줄게요.
	int x, y, result;
	
	printf("수식을 입력하시오(예: 2 + 5) \n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);
	
	if(op == '+'){
		result = x + y;
	} else if(op == '-'){
		result = x - y;
	} else if(op == '*'){
		result = x * y;
	} else if(op == '/'){
		result = x / y;
	} else if(op == '%'){
		result = x % y;
	} else {
		printf("지원되지 않는 연산자 입니다. \n");
	}

	printf("%d %c %d = %d \n", x, op, y, result);
	return 0;
}
