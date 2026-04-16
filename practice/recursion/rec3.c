//wap to check the number prime or not using recursion

#include<stdio.h>

int prime(int a, int n)
{
    if (a==n)
    {
        return 1;
    }
    if (n%a==0)
    {
        return 0;
    }
    return prime(a+1, n);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int r=prime(2, n);
    if (r==1)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
}