/*
1234
123
12
1
*/

#include<stdio.h>
int main()
{
    int count=1;
    for (int i=1; i<=4; i++)
    {   
        count=1;
        for (int j=4; j>=i; j--)
        {
            printf("%d ", count);
            count++;   
        }
        printf("\n");
    }
}
