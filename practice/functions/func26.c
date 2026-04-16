//waf to check sum of square of a digit is prime

#include<stdio.h>

void sum(int num)
{
    int rem=0, sq=0, sum=0, temp=num, i=1, count=0;
    while(num!=0)
    {
        rem=num%10;
        sq=rem*rem;
        sum=sum+sq;
        num=num/10;
    }
    printf("Sum of square of digit of a %d is: %d\n", temp, sum);
    while(i<=sum)
    {
        if (sum%i==0)
        {
            count++;
        }
        i++;
    }
    if (count==2)
    {
        printf("sum of square of a digit of %d is prime\n", temp);
    }
    else
    {
        printf("sum of square of a digit of %d is not a prime\n", temp);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum(num);
}