//Assignment 3
//Fibonacci
/*
#include<stdio.h>
int main()
{
    int num, a=0, b=1, c;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num>0)
    {
        for (int i=1; i<=num; i++)
        {
            printf("%d ", a);
            c=a+b;
            a=b;
            b=c;      
        }
        printf("\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}
*/

#include<stdio.h>
int main()
{
    int num, p1=0, p2=1, res=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    if (num>0)
    {
        while(res<=num)
        {
            printf("%d ", res);
            p1=p2;
            p2=res;
            res=p1+p2;
        }
    }
    else
    {
        printf("Invalid input\n");
    }  
}