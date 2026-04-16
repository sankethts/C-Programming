//Print Numbers from 1 to 5
#include<stdio.h>
int main()
/*
{
    int count=1;
    while (count<=5)
    {
        printf("%d ", count);
        count++;
    }
    printf("\n");
}
*/

//Write a program to calculate the sum of first 10 natural numbers using a while loop.
/*
{
    int i=1, count=0;
    while (i<=10)
    {
        count=count+i;
        i++;
    }
    printf("%d\n", count);
}
*/

//Print Even Numbers from 1 to 10
/*
{
    int i=1;
    while(i<=10)
    {
        if (i%2==0)
        {
            printf("%d ", i);
        }
        i++; 
    }   
}
*/

//Write a program to reverse a number using a while loop. (Example input: 1234)
/*
{
    int n, rem, rev=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d\n", rev);
}
*/

//Write a program to count the number of digits in a given number using a while loop.
/*
{
    int n, rem, count=0;
    printf("Enter the number: ");//7654
    scanf("%d", &n);

    if (n==0)
    {
        count=1;
    }
    
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d\n", count);
}
*/

//Display all factors of a number using a while loop. (Input: 12)
/*
{
    int n, i=1;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n==0)
    {
        printf("Factor is 0\n");
    }

    while (i<=n)
    {
        if (n%i==0)
        {
            printf("%d ", i);
            i++;
        }
        else
        {
            i++;
        }
    }
    printf("\n");
}
*/

//Count how many times a digit appears in a number. (check for digit = 3)
/*
{
    int n, rem, digit, count=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the digit to check: ");
    scanf("%d", &rem);

    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        if (digit==rem)
        {
            count++;
        }
    }
    printf("Digit %d appears %d times\n", rem, count);
}
*/

//Write a program to calculate the factorial of a number using a while loop. (Example input: 5)
/*
{
    int n, fact=1, i=1;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n==0)
    {
        fact=1;
    }
    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d\n", fact);
}
*/

//Write a program to check if a number is a palindrome using a while loop. (Example input: 121)
/*
{
    int n, rem, temp, rev=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (temp==rev)
    {
        printf("%d is a palindrome number\n", temp);
    }
    else
    {
        printf("%d is not a palindrome number\n", temp);
    }

}
*/

//Write a program to find the sum of digits of a number using a while loop. (Example input: 345)
/*
{
    int n, sum=0, digit;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("%d\n", sum);
}
*/

//Write a program to find the sum of even digits in a number using a while loop. (Input: 2467)
/*
{
    int n, sum=0, digit;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        digit=n%10;
        if (digit%2==0)
        {
            sum=sum+digit;
        }
        n=n/10;
    }
    printf("%d\n", sum);
}
*/

//Write a program to calculate the result of base^exponent using a while loop. (Input: base = 2, exponent = 4)

{
    int base, exp, temp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    temp=base;

    while(exp-1>0)
    {
        base=base*temp;
        exp--;
    }
    printf("%d\n", base);
}


