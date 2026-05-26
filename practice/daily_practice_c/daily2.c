#include<stdio.h>
#if 0
//wap to find factorial of a number
int main()
{
    int n, res=1;
    printf("Enter number: ");
    scanf("%d", &n);
    int temp = n;
    while(n)
    {
        res=res*n;
        n--;
    }
    printf("Factorial of %d: %d\n", temp, res);
    return 0;
}
#endif

#if 0
//wap to generate multiplication table
int main()
{
    int n, i=1;
    printf("Enter multiplication number: ");
    scanf("%d", &n);
    while(i<=10)
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}
#endif

#if 0
//wap to generate fibonacci series
int main()
{
    int a=0, b=1, next=0, n;
    printf("Enter limit: ");
    scanf("%d", &n);
    while(n>=next)
    {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");
    return 0;
}
#endif

#if 0
//wap to find lcm of two numbers
//first find max of two numbers, then check that max is divisible by both number, 
//if not max++ and continue the check
int main()
{
    int a, b, max=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max=a>b?a:b;
    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            printf("LCM of %d and %d is %d\n", a, b, max);
            break;
        }
        max++;
    }
    printf("\n");
    return 0;
}
#endif

#if 0
//wap to check armstrong number
//An Armstrong number is defined as a number that is equal to the sum of the 
//Kth power of each digit in the number, where K is the number of digits in it.
//153 is armstrong number, 153 = (1)^3 + (5)^3 + (3)^3, where 3 is number of digits
#include<math.h>//./a.out daily2.c -lm
int main()
{
    int n, digit=0, res=0, rem=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while(temp != 0)
    {
        temp = temp / 10;
        digit++;
    }

    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        res=res+pow(rem, digit);
        temp=temp/10;
    }

    if(n==res)
    {
        printf("%d is a armstrong number\n", n);
    }
    else
    {
        printf("%d is not armstrong number\n", n);
    }
    printf("\n");
    return 0;
}
#endif

#if 0
//wap to display armstrong numbers from 1 to 1000
#include<math.h>
int main()
{
    int low, up;
    printf("Enter lower and upper limit: ");
    scanf("%d %d", &low, &up);

    int n=1, temp=0, digit=0, rem=0, res=0;
    printf("Armstrong numbers are:\n");
    while(n>=low && n<=up)
    {
        temp=n;
        digit=0;
        while(temp!=0)
        {
            temp=temp/10;
            digit++;
        }

        temp=n;
        rem=0;
        res=0;
        while(temp!=0)
        {
            rem=temp%10;
            res=res+pow(rem, digit);
            temp=temp/10;
        }

        if(res==n)
        {
            printf("%d ", n);
        }
        n++;
    }
    printf("\n");
    return 0;
}
#endif

#if 0
//wap to display prime numbers b/w intervals
int main()
{
    int low, up, n, i=1, count=0;
    printf("Enter lower and upper limit: ");
    scanf("%d %d", &low, &up);
    printf("Prime numbers are:\n");
    for(n=low; n<=up; n++)
    {
        i=1;
        count=0;
        while(i<=n)
        {
            if(n%i==0)
             count++;           
            i++;
        }
        if(count==2)
         printf("%d ", n);
    }
    printf("\n");
    return 0;
}
#endif

#if 0
//wap to check neon number
//A number where the sum of digits of the square of the number is equal to the number
//num=9, 9*9=81, 8+1=9, 9 is neon number
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int sq=n*n, res=0;
    while(sq!=0)
    {
        res=res+sq%10;
        sq=sq/10;
    }
    if(res==n)
        printf("%d is neon number\n", n);
    else
        printf("%d is not a neon number\n", n);
    
    printf("\n");
    return 0;
}
#endif

#if 1
//wap to find sum of fibonacci numbers at even indexes upto n terms
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int a=0, b=1, next=0, sum=0;
    for(int i=0; i<=2*n; i++)
    {
        if(i%2==0)
         sum=sum+a;
        
        next=a+b;
        a=b;
        b=next;
        
    }
    printf("Sum of fibonacci numbers at even indexes upto %d terms is: %d\n", n, sum);
} 
#endif