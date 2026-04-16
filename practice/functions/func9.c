//waf to find the maximum number b/w three numbers

#include<stdio.h>

void max(int a, int b, int c)
{
    if (a>b && a>c)
    {
        printf("Maximum number is %d\n", a);
    }
    else if (b>a && b>c)
    {
        printf("Maximum number is %d\n", b);
    }
    else
    {
        printf("Maximum number is %d\n", c);
    }
}
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max(num1, num2, num3);
}