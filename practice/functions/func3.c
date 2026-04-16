//waf to check the number is palindrome or not

#include<stdio.h>

void palindrome(int num)
{
    int rem=0, sum=0;
    int temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    if (temp==sum)
    {
        printf("%d is a palindrome\n", temp);
    }
    else
    {
        printf("%d is not a palindrome\n", temp);
    } 
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    palindrome(num);
}