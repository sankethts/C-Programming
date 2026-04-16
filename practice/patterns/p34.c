/*
2_4_
_4_6
4_6_
_6_8
*/

#include<stdio.h>
int main()
{
    int row;
    printf("Enter row: ");
    scanf("%d", &row);

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<row; j++)
        {
            if ((i+j)%2==0)
            {
                printf("%d", 2+i+j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}