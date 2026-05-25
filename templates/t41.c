//waf to find product of two numbers without using *
#include<stdio.h>
int prod(int n1, int n2);
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Product = %d\n", prod(n1, n2));
}
int prod(int n1, int n2)
{
    int res=0;
    while(n2!=0)
    {
        res = res + n1;
        n2--;
    }
    return res;
}