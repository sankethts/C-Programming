//waf to check the number is a strong number 145=1!+4!+5!

#include<stdio.h>

int strong(int num)
{
    int rem=0, fact=1, sum=0, i=1, temp=num;
    while(num!=0)
    {
        rem=num%10;
        fact=1;
        i=1;
        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }
        num=num/10;
        sum=sum+fact;
    }
    if (sum==temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int r=strong(num);
    if (r==1)
    {
        printf("%d is a strong number\n", num);
    }
    else
    {
        printf("%d is not a strong number\n", num);
    }
}