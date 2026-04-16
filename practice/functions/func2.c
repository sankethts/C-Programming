//waf to check whether the number is prime or not

#include<stdio.h>


int prime(int num)
{
    int count=0, i=2;
    while(num>i)
    {
        if (num%i==0)
        {
            count++;
        }
        i++;
    }
    if (count==0)
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
    int p=prime(num);
    if (p==1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
}