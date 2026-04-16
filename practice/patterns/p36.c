/*
5
45
345
2345
12345
2345
345
45
5
*/
#include<stdio.h>
int main()
{
    int row;
    printf("Enter row: ");
    scanf("%d", &row);

    for (int i=row; i>=1; i--)
    {  
        for (int j=i; j<=row; j++)
        {
            printf("%d", j);       
        }
        printf("\n");
    }
    for (int i=1; i<=row-1; i++)
    {
        for (int j=i+1; j<=row; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}