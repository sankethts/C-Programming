#include<stdio.h>
#if 0
//wap to check number is prime or not
int main()
{
    int n, i = 2;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Enter only positive number\n");
        return 0;
    }
    if(n == 0 || n == 1)
    {
        printf("%d is not a prime number\n", n);
        return 0;
    }
    while(i <= (n/2))
    {
        if(n % i == 0)
        {
            printf("%d is not prime number\n", n);
            return 0;
        }
        i++;
    }
    printf("%d is prime number\n", n);
    return 0;
}
#endif

#if 0
//wap to swap two numbers without use of temp variable
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
    // n1 = n1 + n2;
    // n2 = n1 - n2;
    // n1 = n1 - n2;
    n1 = n1 * n2;
    n2 = n1 / n2;
    n1 = n1 / n2;
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}
#endif

#if 0
//wap to swap two numbers with use of temp variable
int main()
{
    int n1, n2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}
#endif

#if 0
//wap to swap two numbers with use of bitwise operator
int main()
{
    int n1, n2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}
#endif

#if 0
//wap to swap two numbers with use of pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
    swap(&n1, &n2);
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}
#endif

#if 0
//wap to swap two numbers with use of macro
// #define SWAP(a, b)\
// {\
//     int temp = a;\
//     a = b;\
//     b = temp;\
// }
#define SWAP(a, b) ({int t = a; a = b; b = t;})
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
    SWAP(n1, n2);
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}
#endif

#if 0
//wap to swap two numbers with use of bit fields
typedef struct bits
{
    unsigned int a : 5;
    unsigned int b : 5;
}bits;
int main()
{
    bits n = {10, 20};
    unsigned int temp;
    printf("Before swapping: n.a = %d, n.b = %d\n", n.a, n.b);
    temp = n.a;
    n.a = n.b;
    n.b = temp;
    printf("After swapping: n.a = %d, n.b = %d\n", n.a, n.b);
}
#endif

#if 0
//wap to print prime numbers from 1 to n
int main()
{
    int n, i = 2, j = 2, flag = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Prime numbers are:\n");
    for(i = 2; i <= n; i++)
    {
        flag = 0;
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
#endif

#if 1//wap to check leap year or not
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0)
     printf("%d is a leap year\n", year);
    else if(year % 100 == 0)
     printf("%d is not a leap year\n", year);
    else if(year % 4 == 0)
     printf("%d is a leap year\n", year);
    else
     printf("%d is not a leap year\n", year);
}
#endif