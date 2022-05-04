#include <stdio.h>
int main(){
	// 문자를 받을 char 변수를 사용, char는 1개의 문자만 받을 수 있음.(a = O, ab = X)
	char ch;
	printf("문자를 입력하시오: ");
	scanf("%c", &ch);
	
	// 만약에 받은 문자가 A보다 크거나 같고, Z보다 크거나 같다면
	if(ch >= 'A' && ch <= 'Z'){
		// 대문자라고 출력
		printf("%c는 대문자입니다.\n", ch);
	// 아니다, 받은 문자가 만약에 a보다 크거나 같고, z보다 크거나 같다면
	} else if(ch >= 'a' && ch <= 'z'){
		// 소문자라고 출력
		printf("%c는 소문자입니다.\n", ch);
	// 아니다! 받은 문자가 0보다 크고 9보다 작다면
	} else if(ch >= '0' && ch <= '9'){
		// 숫자라고 출력
		printf("%c는 숫자입니다.\n", ch);
	// 아니다!! 이것도 저것도 그것도 다 아니다!
	} else {
		// 그러면 기타문자라고 출력
		printf("%c는 기타문자입니다.\n", ch);
	}

	return 0;
}
