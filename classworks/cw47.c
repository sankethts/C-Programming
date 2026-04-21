//Set, get, clear nth bit
#include<stdio.h>
int main()
{
    unsigned int num;
    int n;
    printf("Enter the number: ");
    scanf("%x", &num);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("set: %x\n", num | (1<<n));
    printf("clear: %x\n", num & ~(1<<n));
    printf("get bit at nth pos: %x\n", (num>>n)&1);
}