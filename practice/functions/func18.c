//waf to check two numbers are equal or not

#include<stdio.h>

void equal(int a,int b)
{
    if (a==b)
    {
        printf("Two numbers are equal\n");
    }
    else
    {
        printf("Two numbers are not equal\n");
    }
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    equal(num1, num2);
}