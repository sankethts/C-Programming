//waf to print factors of numbers

#include<stdio.h>

void factor(int num)
{
    for (int i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    factor(num);
    
}