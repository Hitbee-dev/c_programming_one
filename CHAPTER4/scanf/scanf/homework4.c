#include <stdio.h>

int main() {
    int a = 123456;
    float b = 123.456;
    double c = 123.456;
    long double d = 123.456;

    printf("int a:\t\t %d\n", a);
    printf("float b:\t %.10f\n", b);
    printf("double c:\t %.10f\n", c);
    printf("long double d:\t %.10lf\n", d);
    return 0;
}