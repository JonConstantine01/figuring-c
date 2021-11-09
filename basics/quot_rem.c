// Compute quotient and remainder
// Use / and % operators.
#include <math.h>
#include<stdio.h>
int main(void) {
    float a, b;
    float quot, rem;
    printf("enter number a\n");
    scanf("%f",&a);
    printf("enter number b\n");
    scanf("%f",&b);
    quot=a/b;
    rem=fmod(a, b);
    printf("the quotient is %f and the remainder is %f", quot, rem);
}