//WAP to check if number is perfect or not
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i=1; i<=(n/2); i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        printf("It is a perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
    return 0;
}