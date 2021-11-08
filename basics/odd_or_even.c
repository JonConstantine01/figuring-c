#include<stdio.h>
int main(void) {
    int a;
    printf("enter a number to check odd or even \n");
    scanf("%d", &a);
    a=a%2;
    if (a==1)
        printf("Its odd number");
    else
        printf("its even number");
}