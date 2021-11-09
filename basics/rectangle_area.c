// Perimeter of rectangle
// Formula: 2 × (length + breadth).

#include <stdio.h>
int main(void) {
    float area, length, breadth;
    printf("enter the length of the rectangle :\n");
    scanf("%f", &length);
    printf("enter the breadth of the rectangle :\n");
    scanf("%f", &breadth);
    area = (length+breadth)*2;
    printf("area of the rectangle is : %f", area);
}