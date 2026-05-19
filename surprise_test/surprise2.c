//Bitwise operators
#include <stdio.h>

#if 0
//1) wap to toggle 'n' bits from the position of a given number
int main()
{
    int num, n, pos;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter 'n' bits value: ");
    scanf("%d", &n);
    printf("Enter the position: ");
    scanf("%d", &pos);
    printf("After toggling, number is: %d\n", num ^ (((1<<n)-1) << (pos-n+1)));
    return 0;
}
#endif

#if 0
//2) wap to reverse the bits of a number
int main()
{
    int num, res=0;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i=0; i<8; i--)
    {
        res = (res<<1) | (num&1);
        num = num >> 1;
    }
    printf("After reversing bits, value is: %d\n", res);
} 
#endif

#if 0
//3) a)wap to unset lsb using bitwise
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("After unset of lsb: %d\n", num & ~1);
}
#endif

#if 0
//3) b)wap to print 'n' bits from lsb of a number
int main()
{
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter bits: ");
    scanf("%d", &n);
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", (num>>i)&1);
    }
    printf("\n");
    return 0;
}
#endif

#if 0
//4) wap to swap two numbers using bitwise operators
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("After swapping:\na = %d b = %d\n", a, b);
}
#endif