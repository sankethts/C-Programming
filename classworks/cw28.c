//WAP to find the sum of the digits of a number using recursive function

#include<stdio.h>

int sum(int num)
{
    if (num==0)
    {
        return 0;
    }
    else
    {
        return (num%10)+sum(num/10);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sum(num));
}