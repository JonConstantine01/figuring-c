// Check if number is positive/negative
// Simple if-else check.

#include<stdio.h>
int main(void) {
    float a;
    printf("Enter a number to check if its postive or negative : \n");
    scanf("%f",&a);
    if (a>0) {
        printf("the entered number %f is a postive.\n", a);
    }
    else
        printf("the number is negative - %f", a);

}