//W.A.P to print the n power of two series using for loop

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int j=1;
    for (int i=1; i<=n; i++)
    {
        printf("%d ", j);
        j=j*2;
    }
}