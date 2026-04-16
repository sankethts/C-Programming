//W.A.P to print the power of N series using Loops

#include<stdio.h>
int main()
{
    int base, exp, c=1;
    printf("Enter base and exponential value: ");
    scanf("%d %d", &base, &exp);
    for (int i=1; i<=exp+1; i++)
    {
        printf("%d ", c);
        c=c*2;
    }
    printf("\n");
}