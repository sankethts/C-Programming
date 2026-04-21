#include<stdio.h>
int main()
{
    int num, shift;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the number of shifts to perform: ");
    scanf("%d", &shift);
    printf("After shifting to the right, the output is : %d\n", num >> shift);
    printf("After shifting to the left, the output is : %d\n", num << shift);
}