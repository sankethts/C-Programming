//WAP to find the sum of n natural numbers using recursive function

#include<stdio.h>
int sum(int num)
{
    if (num==0)
    {
        return 0;
    }
    else
    {
        return num+sum(num-1);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num<0)
    {
        printf("Please enter a positive number\n");
    }
    else
    {
        printf("Sum of first %d numbers is %d\n", num, sum(num));
    }
}