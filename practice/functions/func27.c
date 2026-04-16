//waf to check if number is a spy number

#include<stdio.h>

void spy();
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    spy(num);
}
void spy(int num)
{
    int rem=0, sum=0, mul=1, temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        mul=mul*rem;
        num=num/10;
    }
    if (sum==mul)
    {
        printf("%d is spy number\n", temp);
    }
    else
    {
        printf("%d is not a spy number\n", temp);
    }
}