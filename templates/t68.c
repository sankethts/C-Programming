#include<stdio.h>
int main()
{
    int num, pos;
    //printf("Enter the number for signed variable: ");
    scanf("%d", &num);
    //printf("Enter the number of shifts to be performed: ");
    //scanf("%d", &pos);
    //printf("After performing signed right shift: %d\n", num>>pos);
    printf("Signed >> 1 = %d\n", num >> 1);
    printf("Signed >> 2 = %d\n", num >> 2);
    
    //unsigned int num1=num;
    //printf("Enter the number for unsigned number: ");
    //scanf("%u", &num1);
    //printf("Enter the number of shifts to be performed: ");
    //scanf("%d", &pos);
    //printf("After performing unsigned right shift: %d\n", num1>>pos);
    printf("Unsigned >> 1 = %u\n", (unsigned)num >> 1);
    printf("Unsigned >> 2 = %u\n", (unsigned)num >> 2);
    
    
}