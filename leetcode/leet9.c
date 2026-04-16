//9. Palindrome number
#include<stdio.h>
int is_palin(int x)
{
    if(x<0 || (x%10==0 && x!=0))
    {
        return 0;
    }

    int rev;
    while(x>rev)
    {
        rev=rev*10+x%10;
        x/=10;
    }
    return x==rev || x==rev/10;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int ret=is_palin(num);
    if(ret==1)
    {
        printf("It is palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }
}