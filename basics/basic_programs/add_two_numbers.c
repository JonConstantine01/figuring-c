#include <stdio.h>
int main(void) {
    float a, b, sum;
    printf("Enter two numbers : \n");
    scanf("%f%f", &a, &b);
    sum = a+b;
    printf("sum of the entered two numbers is : %f", sum);
}