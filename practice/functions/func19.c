//waf to calculate number of digits of a number

#include<stdio.h>

void digit(int num)
{
    int count=0, rem=0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("%d\n", count);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    digit(num);
}