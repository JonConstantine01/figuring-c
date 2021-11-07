#include<stdio.h>
int main() {
    int basic;
    float hra;
    /*We use the delimiter the : colon so the input can also be entered as -> 45:74.56 and output will be basic=45, hra=74.56*/
    scanf("%d:%f",&basic,&hra);
    printf("basic=%d, hra=%f", basic, hra);
}