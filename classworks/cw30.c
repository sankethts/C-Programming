//WAP to print numbers from 0 to n using static variable and recursive  function.

#include<stdio.h>

int stat(int n, int limit)
{
    printf("%d ", n);
    if(n==limit)
    {
        return 0;
    }
    else
    {
        stat(n+1, limit);
    }
}
int main()
{
    static int limit;
    printf("Enter the number: ");
    scanf("%d", &limit);
    stat(0,limit);
}