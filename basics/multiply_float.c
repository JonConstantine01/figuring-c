/*Multiply two floats - Use float data type for decimals.*/
#include<stdio.h>
int main(void) {
    float a,b,c;
    printf("Enter two numbers : \n");
    scanf("%f%f", &a,&b);
    c=a*b;
    /*we use freaking .2 before the %f for rounding the decimal places.*/
    printf("the two numbers products is %.2f", c);
}