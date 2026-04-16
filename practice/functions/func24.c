//waf to count number of even digits of a number

#include<stdio.h>

void evendigit(int num)
{
    int rem=0, count=0, temp=num;
    while(num!=0)
    {
        rem=num%10;
        if (rem%2==0)
        {
            printf("%d ", rem);
            count++;
        }
        num=num/10;
    }
    printf("\n%d\n", count);
    
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    evendigit(num);
}