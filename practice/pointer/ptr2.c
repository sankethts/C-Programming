

//wap to print addition of two number using pointer

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int *ptr=&a;
    int *ptr1=&b;
    printf("Sum of %d and %d is %d\n", a,b, (*ptr + *ptr1));
}