// Area of circle -
//     Use π × r × r. Use float or double.

#include<stdio.h>
#define PI 3.14
int main(void) {
    double radius, area;
    printf("enter the radius of circle to find area :\n");
    scanf("%lf",&radius);
    area = PI * radius * radius;
    printf("area of the circle is : %lf", area);
}