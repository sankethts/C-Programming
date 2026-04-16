/*
                   *
                *  *
            *   *  *
         *  *   *  * 
            *   *  * 
                *  * 
                   * 
*/

#include<stdio.h>
int main()
{
    int row, space;
    printf("Enter rows: ");
    scanf("%d", &row);
    for (int i=1; i<=row; i++)
    {
        for (space=1; space<=row-i; space++)
        {
            printf("  ");
        }
        for (int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i=1; i<row; i++)
    {
        for (space=1; space<=i; space++)
        {
            printf("  ");
        }
        for (int j=1; j<=row-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}