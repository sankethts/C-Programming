//WAP to find n to the power of m value using recursive function

#include<stdio.h>

int power(int n, int m)
{
    if (m==0)
    {
        return 1;
    }
    else
    {
        return n*power(n,m-1);
    }
}
int main()
{
    int n, m;//2 5
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &m);
    if (m<0)
    {
        printf("Power should be non-negetive\n");
    }
    else
    {
        printf("%d to the power of %d is %d\n", n, m, power(n,m));
    }
}