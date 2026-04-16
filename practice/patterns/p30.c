/*
*******
-*****-
--***--
---*---
*/
#include<stdio.h>
int main()
{
    int row, space;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for (int i=row; i>=1; i--)
    {
        for (space=1; space<=row-i; space++)
        {
            printf(" ");
        }
        for (int j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}