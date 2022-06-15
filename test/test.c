#include <stdio.h>

void f(void){
	int count = 0;
	printf("%d\n", count++);
}

int main(void){
	f(), f();
	return 0;
}
