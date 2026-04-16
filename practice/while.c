/*
while loop is used to repeat the same task for multiple times
for and while loop considered as a entry controlled loop
syntax:
initialization
while(condition)
{
 //statements
 //post evaluation expression
}
*/

//Mobile password entry
/*
#include<stdio.h>
int main()
{
    int int_pass=1234;
    int pass;
    for (int i=1;i<=5;i++)
    {
        printf("Enter the password: ");
        scanf("%d", &pass);
        if(pass==int_pass)
        {
            printf("success\n");
            break;
        }
    }
}
*/
//do the above using while loop
/*
#include<stdio.h>
int main()
{
    int int_pass=1234;
    int pass;
    
    while(1)
    {
        printf("Enter the password: ");
        scanf("%d", &pass);
        if (pass==int_pass)
        {
            printf("Success\n");
            break;
        }
        else
        {
            printf("Wrong password, try again\n");
        }
    }    
}
*/

//
/*
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n", i);
        i++;
    }
    printf("\n");
    int j=10;
    while(j>=1)
    {
        printf("%d\n", j);
        j--;
    }
}
*/

//prime number using while loop
/*
#include<stdio.h>
int main()
{
    int num,i=1,count=0;
    printf("Enter the value of num: ");
    scanf("%d", &num);

    while(i<=num)
    {
        if (num%i==0)
        {
            count++;
        }
        i++;
    }
    if (count==2)
    {
        printf("%d is prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
}
*/

//254
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        printf("%d\n", num%10); //prints the last digit of a number after each updation
        num=num/10; //254>25>2>0
    }
}
*/

/* all using while loop
//wap to take the sum of digits of a number
//wap to take even digit sum of a number
//wap to reverse of a number: for example 145 -> 541
//wap to check the number is palindrome or not
121 read in reverse same 121
//wap to check number is perfect or not
145=1!+4!+5!
*/

//wap to take the sum of digits of a number
/*
#include<stdio.h>
int main()
{
    int num, sum=0, temp;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        temp = num%10;
        sum = sum + temp;
        num=num/10;
    }
    printf("%d\n", sum);
}
*/

//wap to take even digit sum of a number
/*
#include<stdio.h>
int main()
{
    int num, sum=0, temp;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        temp = num%10;
        if(temp%2==0)
        {
            sum = sum + temp;
            
        }  
        num=num/10;      
    }
    printf("%d\n", sum);
}
*/

//wap to print reverse of a number
//145=541
/*
#include<stdio.h>
int main()
{
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        temp=num%10;
        printf("%d", temp);
        num=num/10;
    }
    printf("\n");
}
*/

#include<stdio.h>
int main()
{
    int num, digit, rev;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    printf("\n");
}


//wap to check whether the number is palindrome or not
/*
#include<stdio.h>
int main()
{
    int num, num1=1, temp;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (num1!=0)
    {
        temp=num%10;
        num1=num/10;
    }
    if (num==temp)
    {
        printf("%d is a palindrome\n", num);
    }
    else
    {
        printf("%d is not a palindrome\n", num);
    }
}
*/

//wap to find factorial of a number using while loop
/*
#include<stdio.h>
int main()
{
    int num, fact=1, i=1;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("%d\n",fact);
}
*/

//wap to check number is perfect or not. for example: 145=1!+4!+5!
/*
#include<stdio.h>
int main()
{
    int num, fact=1, i=1, temp, temp1=0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (1)
    {
        temp=num%10;
        temp=temp*i;
        temp1=temp1+temp;
        i++;
        
    }
    printf("%d\n",fact);
}
*/

