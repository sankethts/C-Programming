// WAP to print 'n' bits from LSB of a number
#include<stdio.h>
int main()
{
    int num, n;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=n-1; i>=0; i--)
    {
        printf("%d", (num>>i)&1);
    }
    printf("\n");
}