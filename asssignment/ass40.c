//WAP to implement Circular right shift
#include<stdio.h>
int main()
{
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter n: ");
    scanf("%d", &n);
    num = ((unsigned)num>>n) | (num << (32-n));
    for(int i=31; i>=0; i--)
    {
        printf("%d", (num>>i)&1);
    }
    printf("\n");
}