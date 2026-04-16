//wap to print factorial of  number using recursion

#include<stdio.h>

int fact(int num)
{
    if (num==0)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int r=fact(num);
    printf("Factorial of %d is: %d\n", num, r);
}