//Check number is +ve, -ve or 0

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num > 0)
    {
        printf("The number is positive\n");
    }
    else if (num < 0)
    {
        printf("The number is negetive\n");
    }
    else
    {
        printf("The number is zero\n");
    }
}