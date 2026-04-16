//waf to reverse the number

#include<stdio.h>

void reverse(int num)
{
    int rem=0, ans=0, temp=num;
    while (num!=0)
    {
        rem=num%10;
        ans=(ans*10)+rem;
        num=num/10;
    }
    printf("Reverse of %d is: %d\n", temp, ans);
    
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    reverse(num);
}