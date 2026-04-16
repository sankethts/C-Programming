//Pattern 4 - Print Simple Triangle Letters Incrementing

#include<stdio.h>
int main()
{
    char count='A';
    for (int i=1; i<=4; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%c ", count);
            count++;
        }
        printf("\n");
    }
}