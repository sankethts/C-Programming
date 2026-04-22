//W.A.P to count set bits in a given number
#include<stdio.h>
int main()
{
    int num, count=0;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num)
    {
        num=num&(num-1);
        count++;
    }
    printf("Number of set bits: %d\n", count);
}