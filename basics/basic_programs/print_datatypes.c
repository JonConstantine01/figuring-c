#include<stdio.h>
int main(void){
    int age;
    float eage;
    char gender;
    /*Int datatype print*/
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Your age is : %d",age);
    /*float datatype print*/
    printf("\nEnter exactly how old are you : ");
    scanf("%f", &eage);
    printf("You are precisely %0.2f years old", eage);
    /*char datatype print*/
    /*have put space before %c*/
    printf("\nEnter your gender : ");
    scanf(" %c", &gender);
    printf("Your gender is : %c", gender);
    return 0;
}