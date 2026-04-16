//WAP to print Fizz, buzz series
#include<stdio.h>
#if 0
int main()
{
    int i;
    
    for (i=1; i<=100; i++)
    {
        if (i%3==0 && i%5==0)
        {
            printf("FizzBuzz ");
        }
        else
        {
            
            if (i%3==0)
            {
                printf("Fizz ");
            }
            else if (i%5==0)
            {
                printf("Buzz ");
            }
            else
            {
                printf("%d ", i);
            }
        }
    }
}
#endif

#if 1
int main()
{
    for(int i=1; i<=100; i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("Fizzbuzz");
        }
        else if(i%5==0)
        {
            printf("Buzz");
        }
        else if(i%3==0)
        {
            printf("Fizz");
        }
        else
        {
            printf("%d", i);
        }
    }
}
#endif