//waf to find sum of digits of a number

#include<stdio.h>

void sumdigits(int num)
{
    int rem=0, sum=0, temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("The sum of digits of %d is: %d\n", temp, sum);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    sumdigits(num);
}