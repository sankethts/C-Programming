//WAP to implement Circular left shift
#include<stdio.h>
void print(int num, int n)
{
    num = (num << n) | ((unsigned)num >> (32-n));
    for(int i=31; i>=0; i--)
    {
        printf("%d", (num>>i)&1);
    }
    printf("\n");
}
int main()
{
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter n bits: ");
    scanf("%d", &n);
    print(num, n);
    return 0;
}