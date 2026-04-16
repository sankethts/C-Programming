/*
A
AB
ABC
ABCD
*/

#include<stdio.h>
int main()
{
    int row;
    char ch='A';
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i=1; i<=row; i++)
    {
        ch='A';
        for (int j=1; j<=i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}