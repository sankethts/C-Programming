//waf to find sum of two numbers
#include<stdio.h>
int sums(int n1, int n2);
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Sum = %d\n", sums(n1, n2));

}
int sums(int n1, int n2)
{
    return n1+n2;
}