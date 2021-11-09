// Area of circle -
//     Use π × r × r. Use float or double.
//    $env:GIT_AUTHOR_DATE="2021-11-09T14:05:19";$env:GIT_COMMITTER_DATE="2021-11-09T14:05:19"

#include<stdio.h>
#define PI 3.14
int main(void) {
    double radius, area;
    printf("enter the radius of circle to find area :\n");
    scanf("%lf",&radius);
    area = PI * radius * radius;
    printf("area of the circle is : %lf", area);
}