//assignment a20
//WAP to generate negative fibbonacci numbers using recursion

#include<stdio.h>
void negative_fibonacci(int limit, int a, int b, int sum)
{
    //if (abs(sum)<=abs(limit))  use #include<stdlib.h>
    if ((sum>=limit) && (sum<=-limit))
    {
        printf("%d ", sum);
        a=b;
        b=sum;
        sum=a-b;
        negative_fibonacci(limit, a, b, sum);
    }
    
}
int main()
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    if (limit>0)
    {
        printf("Invalid input\n");
    }
    else
    {
        negative_fibonacci(limit, 0, 1, 0);
        printf("\n");
    } 
}