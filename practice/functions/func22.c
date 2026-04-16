//waf to check number is in range 50 to 100

#include<stdio.h>

void range(int num)
{
    if (num>=50 &&num<=100)
    {
        printf("In the range\n");
    }
    else
    {
        printf("Not in the range\n");
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    range(num);
}