/*
ABCD
BCDE
CDEF
DEFG
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    char ch1='A', ch;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        ch=ch1;
        ch1++;
        for (int j=1; j<=column; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}
*/

#include<stdio.h>
int main()
{
    int n=4;
    char ch='A';
    for (int i=0; i<n; i++)
    {
        ch='A'+i;
        for (int j=1; j<=n; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}