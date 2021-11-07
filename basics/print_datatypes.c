#include<stdio.h>
int main(void){
    int age;
    float eage;
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Your age is : %d",age);

    printf("\nEnter exactly how old are you : ");
    scanf("%f", &eage);
    printf("You are precisely %0.2f years old", eage);
    return 0;
}