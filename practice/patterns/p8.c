/*
AAAA
BBBB
CCCC
DDDD
*/

#include<stdio.h>
int main()
{
    int row, column;
    char ch='A';
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
}