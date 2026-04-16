//W.A.P to check whether a number is palindrome or not

#include<stdio.h>
int main()
{
    int num, rem=0, rev=0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if (temp==rev)
    {
        printf("%d is a palindrome\n", temp);
    }
    else
    {
        printf("%d is not a palindrome\n", temp);
    }
    printf("\n");
}