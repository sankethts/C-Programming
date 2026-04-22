//WAP to put the (b-a+1) lsb’s of num into val[b:a]
#include<stdio.h>
void replace_nbits_from_pos(int num, int a, int b, int val)
{
    num = num & ((1<<(b-a+1))-1);
    val = val & ~(((1<<(b-a+1))-1)<<(b-(b-a+1)+1));
    num = num << (b-a+1);
    val = val | num;
    printf("%d\n", val);
}
int main()
{
    int num, val, a, b;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter val: ");
    scanf("%d", &val);
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    if(b>=a && b<=31)
    {
        replace_nbits_from_pos(num, a, b, val);
    }
    return 0;
}