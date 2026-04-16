//waf to check the number is even and less than 100

#include<stdio.h>

void number(int num)
{
    if (num%2==0)
    {
        if (num<100)
        {
            printf("%d is even and less than 100\n", num);
        }
        else
        {
            printf("%d is even and not less than 100\n", num);
        }
    }
    else
    {
        if (num<100)
        {
            printf("%d is odd and less than 100\n", num);
        }
        else
        {
            printf("%d is odd and not less than 100\n", num);
        }
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    number(num);

}