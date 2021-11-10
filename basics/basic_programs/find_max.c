// Find max of two numbers
// Use if-else or ternary operator.

#include<stdio.h>
int main(void) {
    float a, b;
    printf("Enter the two numbers to check the max \n");
    scanf("%f%f",&a,&b);
    if (a>b) {
        printf("%f is greater than %f\n",a, b);
    }
    else if (b>a) {
        printf("%f is greater than %f.\n",b,a);
    }
    else {
        printf("Both numbers are equal bruh.\n");
    }
}