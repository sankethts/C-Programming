//waf to check sum of digits is even

#include<stdio.h>

void evendigit(int num)
{
    int rem=0, sum=0, temp=sum;
    while(num!=0)
    { 
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    if (sum%2==0)
    {
        printf("Sum of digits is even\n");
    }
    else
    {
        printf("Sum of digits is odd\n");
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    evendigit(num);
}