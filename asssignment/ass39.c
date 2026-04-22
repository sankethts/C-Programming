//WAP to toggle 'n' bits from given position of a number
#include<stdio.h>
int main()
{
    int num, n, pos;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Result: %d\n", (num ^ (((1<<n)-1)<<(pos-n+1))));
}