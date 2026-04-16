//wap to find the average of 3 float values

#include<stdio.h>
int main()
{
    float num1,num2, num3;
    printf("Input: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("Output: %g\n", (num1+num2+num3)/3);
}