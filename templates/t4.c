//Temperature Conversion - Fahrenheit to Celcius

#include<stdio.h>
int main()
{
    float fahrenheit;
    //printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("Celsius= %g", (fahrenheit-32)*5/9);
}