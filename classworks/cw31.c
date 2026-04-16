//wap to read a N value from user and find the sum of 1 to N sequence using recursion.

#include<stdio.h>

int sum(int m, int n)
{
    if (m>n)
    {
        return 0;
    }
    else
    {
        return m+sum(m+1, n);
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d\n",sum(1,n));
}