//assignment a19
//wap to generate fibonacci numbers using recursion

#include<stdio.h>
void positive_fibonacci(int limit, int a, int b, int sum)
{
    if (sum<=limit)
    {
        printf("%d ", sum);
        //a=b;
        //b=sum;
        //sum=a+b;
        positive_fibonacci(limit, b, sum, sum+b);
    }
}
int main()
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    positive_fibonacci(limit, 0, 1, 0);
}
