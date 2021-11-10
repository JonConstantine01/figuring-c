// Calculate power of a number
// Use loop or pow() function.
// $env:GIT_AUTHOR_DATE="2021-11-10T20:55:12";$env:GIT_COMMITTER_DATE="2021-11-10T20:55:12"

//Using math lib & pow function
// #include<stdio.h>
// #include<math.h>
// int main(void) {
//     float base,result;
//     int exponent;
//     printf("Enter the base: \n");
//     scanf("%f",&base);
//     printf("enter the exponent:\n");
//     scanf("%d",&exponent);
//     result = pow(base, exponent);
//     printf("The result of %f raised to the power of %d is %f", base, exponent, result);
// }

//Using loops
#include <stdio.h>

int main(void) {
    double base, result = 1;
    int exponent, i;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent (positive integer): ");
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; ++i) {
        result *= base;
    }

    printf("%.2lf raised to the power %d is %.2lf\n", base, exponent, result);
    return 0;
}