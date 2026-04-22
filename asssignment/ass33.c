// WAP to get 'n' bits of a given number
#include<stdio.h>
int main()
{
    int num, n;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d\n", num & ((1<<n)-1));
}