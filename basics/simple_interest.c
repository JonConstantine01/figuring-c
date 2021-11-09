// Simple interest calculator
// Use formula: SI = (P × R × T) / 100.

#include<stdio.h>
int main(void) {
    float pri, rate, time;
    printf("Enter principle amount :\n");
    scanf("%f",&pri);
    printf("Enter rate of interest :\n");
    scanf("%f",&rate);
    printf("Enter period of interest :\n");
    scanf("%f",&time);
    float SI=(pri*rate*time)/100;
    printf("the simple interest is : %f", SI);

}