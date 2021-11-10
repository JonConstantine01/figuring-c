#include<stdio.h>
int main(void) {
    float a,b;
    printf("Enter two numbers : \n");
    scanf("%f%f", &a, &b);
    a = a + b;
    b=a - b;
    a=a - b;
    printf("After swap : %f,%f", a, b);
}