//WAP to check N th bit is set or not, If yes, clear the M th bit
#include<stdio.h>
int main()
{
    int num, n, m;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);
    if (((num>>n)&1)==1)
    {
        num = num & ~(1<<m);
    }
    printf("Updated value of num: %d\n", num);
}