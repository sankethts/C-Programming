//Set, clear , get n bits to the right from given position
#include<stdio.h>
int main()
{
    int num, n, pos;
    printf("Enter number: ");
    scanf("%x", &num);
    printf("Enter n bits: ");
    scanf("%d", &n);
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("set: %x\n", num | (((1<<n)-1) << (pos-n+1)));
    printf("clear: %x\n", num & ~(((1<<n)-1) << (pos-n+1)));
    printf("get: %x\n", (num & (((1<<n)-1) << (pos-n+1))) >> (pos-n+1));
}


