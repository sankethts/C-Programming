//waf to check prime number
#include<stdio.h>
void prime(int n);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n==0 || n==1 || n==-1)
    {
        printf("It is not a prime number\n");
        return 0;
    }
    prime(n);
    return 0;
}
void prime(int n)
{
    for(int i=2; i<n/2; i++)
    {
        if(n%i == 0)
        {
            printf("It is not prime number\n");
            return;
        }
    }
    printf("It is a prime number\n");
}