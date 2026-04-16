/*
1---5
-2-4-
--3--
-2-4-
1---5
*/
#include<stdio.h>
int main()
{
    int row;
    printf("Enter row: ");
    scanf("%d", &row);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=row; j++)
        {
            if ((i==j) || (i+j)==row+1)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}