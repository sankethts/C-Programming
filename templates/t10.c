//Check whether number is in given range

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num>=50 && num<=100)
    {
        printf("%d is in range\n", num);
    }
    else
    {
        printf("%d is not in range\n", num);
    }
}