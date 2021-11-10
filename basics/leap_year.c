// Check for leap year
// Check divisibility by 4, 100, 400.

#include<stdio.h>
int main() {
    int a;
    printf("enter the year to check if its a leap year \n");
    scanf("%d",&a);
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        printf("it is a leap year\n");
    }
    else {
    printf("it is not leap year\n");
    }
}