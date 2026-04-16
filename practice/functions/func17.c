//waf to find sum of first n natural numbers

#include<stdio.h>

void sum(int n)
{
    int s=0;
    for (int i=1; i<=n; i++)
    {
        s=s+i;
    }
    printf("%d\n", s);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum(num);
}