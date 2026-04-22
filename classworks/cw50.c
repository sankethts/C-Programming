//W.A.P to swap nibbles of given number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the hexa decimal value: ");
    scanf("%x", &num);
    // int temp = num & ((1<<4)-1);
    // temp = temp << 4;
    // num = num >> 4;
    // num = num | temp;
    num = ((num & 0x0f)<<4) | ((num & 0xf0)>>4);
    printf("%x\n", num);
}