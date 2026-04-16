//waf to find power of a number

#include<stdio.h>

void power(int a, int b)
{
    int res=1;
    while(b>0)
    {
        res=res*a;
        b--;
    }
    printf("%d\n", res);
}
int main()
{
    int num, pow;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &pow);
    power(num, pow);
}