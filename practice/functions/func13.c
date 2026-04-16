//waf to find average of three numbers

#include<stdio.h>

void average(int a, int b, int c)
{
    printf("Average is: %d\n", (a+b+c)/3);
}
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    average(num1, num2, num3);
}