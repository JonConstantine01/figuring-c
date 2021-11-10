#include<stdio.h>
int main(void) {
    float a, b, temp;
    printf("enter two numbers \n");
    scanf("%f%f", &a, &b);
    temp = a;
    a=b;
    b=temp;
    printf("Swapped two numbers are : %f%f", a,b);
}