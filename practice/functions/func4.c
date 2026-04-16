//waf to square the number

#include<stdio.h>

int square(int num)
{
    int sq=num*num;
    return sq;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int s=square(num);
    printf("%d\n", s);
}