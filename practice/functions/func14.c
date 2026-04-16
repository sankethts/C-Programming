//waf to find sum of even numbers from 1 to n

#include<stdio.h>

void sumeven(int n)
{
    int sum=0;
    for (int i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            sum=sum+i;  
        }
    }
    printf("Sum: %d\n", sum);
   
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    sumeven(n);
}