//Temperature Conversion - (int) Fahrenheit to Celcius (float)

#include<stdio.h>
int main()
{
    int fahrenheit;
    float celsius;
    
    scanf("%d", &fahrenheit);
    
    printf("%g\n", (fahrenheit-32)*5.0/9);
}