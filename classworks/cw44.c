//Set, clear, get n bits from LSB
#include<stdio.h>
int main()
{
    int num, n;
    printf("Enter the number: ");
    scanf("%x", &num);
    printf("Enter the number of bits: ");
    scanf("%d", &n);
    printf("set: %x\n", num | ((1<<n)-1));
    printf("clear: %x\n", num & ~((1<<n)-1));
    printf("get: %x\n", num & ((1<<n)-1));
}