#include<stdio.h>
#include<math.h>
#include<stdlib.h>//abs()
/*
pow() x^y
sqrt() square root
cbrt() cube root
ceil() round up
floor() round down
round() round to nearest integer
abs() absolute value for integer
fabs() absolute value for floating point values
*/
#if 0
//wap to check prime number by creating function
int check_prime(int n);
int main()
{
    int n;
    printf("Enter number: ");//enter only positive number
    scanf("%d", &n);
    int result = check_prime(n);
    if(result == 1)
     printf("%d is prime number\n", n);
    else
     printf("%d is not prime number\n", n);    

    return 0;
}
int check_prime(int n)
{
    int i=2;
    if(n == 0 || n == 1)
     return 0;

    while(i<=(n/2))
    {
        if(n % i == 0)
         return 0;

        i++;
    }
    return 1;
}
#endif

#if 0
//wap to display prime numbers b/w two intervals by creating function
void display_prime(int l, int u);
int main()
{
    int low, up;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &low, &up);
    display_prime(low, up); 

    return 0;
}
void display_prime(int l, int u)
{
    printf("Prime numbers are:\n");
    int i, j, flag=0;
    for(i=l; i<=u; i++)
    {
        j = 2;
        flag=0;
        while(j < i)
        {
            if(i % j == 0)
            {
                flag=1;
                break;
            }
            j++;
        }
        if(flag == 0 && i != 0 && i != 1)
         printf("%d ", i);
    }
    printf("\n");
}
#endif

#if 0
//wap to print roots of quadratic equation
void quad(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter the values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    quad(a, b, c);
    return 0;
}
void quad(int a, int b, int c)
{
    if(a==0)
    {
        printf("a cannot be zero\n");
        return;
    }

    int d = b*b - 4*a*c;
    double sqrt_val = sqrt(abs(d));

    if(d>0)
    {
        printf("Roots are real and different\n");
        printf("Root1 = %g Root2 = %g\n", (-b + sqrt_val)/(2*a), (-b - sqrt_val)/(2*a));
    }
    else if(d == 0)
    {
        printf("Roots are equal\n");
        printf("Root1 = %g Root2 = %g\n", (double)-b/(2*a), (double)-b/(2*a));
    }
    else
    {
        printf("Roots are complex\n");
        printf("Root1 = %g + i%g Root2 = %g - i%g\n", (double)-b/(2*a), sqrt_val/(2*a), (double)-b/(2*a), sqrt_val/(2*a));
    }
}
#endif

#if 0
//wap to check whether a number can be expressed as sum of two prime numbers by creating function
int isprime(int n);
int main()
{
    int n, i;
    printf("Enter number: ");//enter only positive number
    scanf("%d", &n);
    for(i=2; i<=(n/2); i++)
    {
        if(isprime(i)==1)
        {
            if(isprime(n-i)==1)
            {
                printf("Yes, %d can be expressed as sum of %d and %d prime numbers\n", n, i, n-i);
                return 0;
            }
        }
    }

    return 0;
}
int isprime(int n)
{
    int i, isprime=1;
    if(n==0 || n==1)
     isprime = 0;
    else
    {
        for(i=2; i<=(n/2); i++)
        {
            if(n % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    return isprime;
}
#endif

#if 0
//wap to find sum of natural numbers using recursion
int sum(int n);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum is: %d\n", sum(n));
}
int sum(int n)
{
    if(n==0)
     return 0;
    return n + sum(n-1);
}
#endif

#if 0
//wap to find factorial of a number using recursion
int fact(int n);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial is: %d\n", fact(n));
    return 0;
}
int fact(int n)
{
    if(n==1)
     return 1;
    return n * fact(n-1);
}
#endif

#if 0
//wap to find hcf or gcd(greatest common divisor) of two numbers
//first find min of two numbers, then check that min is divisible by both number, 
//if not min-- and continue the check
int main()
{
    int a, b, min=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    min=a<b?a:b;
    while(min > 0)
    {
        if(a % min == 0 && b % min == 0)
        {
            printf("HCF of %d and %d is %d\n", a, b, min);
            break;
        }
        min--;
    }
    printf("\n");
    return 0;
}
#endif

#if 0
//wap to reverse stack using recursion(backtracking)
int stack(int n);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    stack(n);
    return 0;
}
int stack(int n)
{
    if(n==0)
     return 1;
    printf("%d ",n);
    stack(n-1);
    printf("%d ", n);
}
#endif

#if 1
//wap to find power of a number
int power(int a, int b);
int main()
{
    int base, pow;
    printf("Enter base and pow: ");
    scanf("%d %d", &base, &pow);
    printf("%d\n", power(base, pow));
    return 0;
}
int power(int a, int b)
{
    if(b==0)
     return 1;
    return a * power(a, b-1);
}
#endif