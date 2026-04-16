//Check for Positive/Negative and Even/Odd

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("The number %d is positive and even\n", num);
        }
        else
        {
            printf("The number %d is positive and odd\n", num);
        }
    }
    else if (num < 0)
    {
        if (num % 2 == 0)
        {
           printf("The number %d is negetive and even\n", num); 
        }
        else
        {
            printf("The number %d is negetive and odd\n", num);
        }
    }
    else
    {
        printf("The number is zero\n");
    }
}