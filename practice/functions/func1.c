#include<stdio.h>
/*
void greeting(void)
{
    printf("Good\n");
}
int main()
{
    greeting();
    greeting();
}
*/
/*
void sum(int a, int b) //can take same name also(int a and int b are called as function parameters)
{
    int sum=a+b;
    printf("%d\n", sum);
}
int main()
{
    int m1=4, n1=5;
    sum(m1,n1);//function call(m1 and n1 are called function arguments)
}
*/

/*
int sum(int a, int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int m1=2, n1=9;
    int r=sum(m1,n1);
    printf("%d\n", r);
}
*/

/*
int sum(int, int);

int main()
{
    int m1=2, n1=9;
    int r=sum(m1,n1);
    printf("%d\n", r);
}
int sum(int a, int b)
{
    int sum=a+b;
    return sum;
}
*/

/*
int mul(int a)
{
    
    return a*10;
}
int sum(int a, int b)
{
    int sum=a+b;
    int r=mul(sum);
    return r;
}
int main()
{
    int n1=3, n2=4;
    printf("%d\n", sum(n1, n2));
}
*/  


//wap to print number is even or odd
int check(int n)
{
    if (n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int r=check(n);
    if (r==1)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}


//prime number
