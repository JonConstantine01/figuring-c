// Convert Celsius to Fahrenheit
// Use formula: (C × 9/5) + 32.

#include<stdio.h>
int main(void) {
    float celcius, farhenheit;
    printf("Enter the temprature in celcius : \n");
    scanf("%f", &celcius);
    farhenheit = (celcius*(9/5.0))+32;
    printf("The temprature in farhenheit is : %.2f", farhenheit);

}