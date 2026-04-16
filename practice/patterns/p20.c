/*
4 3 2 1
3 2 1 0
2 1 0 -1
1 0 -1 -2
*/

#include<stdio.h>
int main()
{
    int count=5;
    for (int i=1; i<=4; i++)
    {   
        for (int j=1; j<=4; j++)
        {
            printf("%d ", count-j);    
        }
        count--;
        printf("\n");
    }
}
