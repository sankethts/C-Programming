/*
1234
2345
3456
4567
*/

#include<stdio.h>
int main()
{
    int count=0;
    for (int i=1; i<=4; i++)
    {   
        for (int j=1; j<=4; j++)
        {
            printf("%d ", count+j);    
        }
        count++;
        printf("\n");
    }
}