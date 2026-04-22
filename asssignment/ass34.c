//WAP to replace 'n' bits of a given number
#include<stdio.h>
int print(int num, int n, int val)
{
    // val = val & ((1<<n)-1);
    // num = num & ~((1<<n)-1);
    // num = num | val;
    // return num;
    return (val & ((1<<n)-1)) | (num & ~((1<<n)-1));

}
int main()
{
    int num, n, val;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter val: ");
    scanf("%d", &val);
    int res=print(num, n, val);
    printf("Result: %d\n", res);
}