// WAP to generate positive Fibonacci numbers
#include<stdio.h>
int main()
{
    int n1=0, n2=1, res=0, n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Invalid input\n");
        return 0;
    }
    printf("Fibonacci series:\n");
    while(res <= n)
    {
        printf("%d ", res);
        n1=n2;
        n2=res;
        res=n1+n2;
    }
    printf("\n");
    return 0;
}