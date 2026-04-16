//Print Greetings based on time

#include<stdio.h>
int main()
{
    int hour;
    printf("Enter time (in hours): ");
    scanf("%d", &hour);
    
    if (hour>=5 && hour<=11)
    {
        printf("Good morning!\n");
    }
    else if (hour>=12 && hour<=15)
    {
        printf("Good afternoon!\n");
    }
    else if (hour>=16 && hour<=21)
    {
        printf("Good evening!\n");
    }
    else if ((hour>=22 && hour<=23) || (hour>=1 && hour<=4))
    {
        printf("Good night!\n");
    }
    else
    {
        printf("Invalid hour!\n");
    }
}