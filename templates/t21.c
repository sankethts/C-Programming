//Reverse a positive integer

#include<stdio.h>
int main()
{
    int num, rem=0, rev=0;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num<0)
    {
        printf("Enter positive number: ");
        return 0;
    }
    for(;num!=0;)//while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;  
    }
    printf("%d", rev);
    printf("\n");
}