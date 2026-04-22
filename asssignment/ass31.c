//WAP to count number of set bits in a given number and print parity
#include<stdio.h>
int main()
{
    int num, count=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num)
    {
        num = num & (num-1);
        count++;
    }
    printf("Number of set bits: %d\n", count);
    if(count%2==0)
    {
        printf("Bit parity is even\n");
    }
    else
    {
        printf("Bit parity is odd\n");
    }
}