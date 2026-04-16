//waf to find maximum number b/w two numbers

#include<stdio.h>

int max(int a,int b)
{
    if (a>b)
    {
        return 1;
    }
    else if (a<b)
    {
        return 0;
    }
    else
    {
        return 2;
    }
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int ret=max(num1, num2);
    if (ret==1)
    {
        printf("Maximum number is %d\n", num1);
    }
    else if (ret==0)
    {
        printf("Maximum number is %d\n", num2);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}