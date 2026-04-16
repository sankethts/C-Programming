#include<stdio.h>
#include<unistd.h>
#if 0
int add_numbers(int n1, int n2)
{
    int s=0;
    s=n1+n2;
    return s;
}
int main()
{
    int num1=10, num2=20;
    int sum=0;
    sum=add_numbers(num1, num2);
    printf("Sum is %d\n", sum);
    return 0;
}
#endif

#if 0
//example 1
int main()
{
    int i=0;//auto storage class
    //int i;//redeclaration of i
    printf("i=%d\n", i);
    return 0;
}
#endif

#if 0
//example 2
int foo()
{
    int i=0;
    printf("function: i=%d\n", i);
    return 0;
}
int main()
{
    int i=5;
    foo();
    printf("main: i=%d\n", i);
    return 0;
}
#endif

#if 0
//example 3
int *foo()
{
    int i=10;
    int *j=&i;
    return j;
    //return &i;
}
int main()
{
    int *i;
    i=foo();//pointer i points to invalid memory, because after function execution, its stack frame gets deleted
    printf("*i %d\n", *i);//undefined behavior
    return 0;
}
#endif

#if 0
//example 4(same as 3)
char *foo()
{
    char ca[]="hello world";
    return ca;
}
int main()
{
    char *ca;
    ca=foo();
    printf("ca is %s\n", ca);
    return 0;
}
#endif

#if 0
//example 5
int book_ticket()
{
    int ticket_sold=0;
    ticket_sold++;
    return ticket_sold;
}
int main()
{
    int count;
    count=book_ticket();
    count=book_ticket();
    printf("sold %d\n", count);
    return 0;
}
#endif

#if 0
//example 6
int main()
{
    int i=4;
    {
        int j=3;
        printf("i %d\n", i);
        //printf("j %d\n", j);
    }
    printf("j %d\n", j);
    //printf("i %d\n", i);
    return 0;
}
#endif

#if 0
//example 7
int main()
{
    int j=10;
    {
        int j=0;
        printf("j %d\n", j);
    }
    printf("j %d\n", j);
    return 0;
}
#endif

#if 0
//example 8
int main()
{
    int i=10;
    int i=20;//redefinition error
    {
        printf("i %d\n", i);
    }
    printf("i %d\n", i);
    return 0;
}
#endif

#if 0
//example 9
int main()
{
    register int i=0;
    scanf("%d", &i);//error, address of register variable i requested
    printf("i %d\n", i);
    return 0;
}
#endif

#if 0
//example 10
int main()
{
    register int i=0;
    register int *j=&i;//error, address of register variable i requested
    printf("*j %d\n", *j);
    return 0;
}
#endif

#if 0
//example 11
int main()
{
    int i=5;
    register int *j=&i;
    printf("*j %d\n", *j);
    return 0;
}
#endif

#if 0
//example 12
int *foo()
{
    static int i=10;//lifetime is till end of program
    int *j=&i;
    return j;
}
int main()
{
    int *i;
    i=foo();
    printf("*i %d\n", *i);
    return 0;
}
#endif

#if 0
//example 13
char *foo()
{
    static char ca[12]="hello world";
    return ca;
}
int main()
{
    char *ca;
    ca=foo();
    printf("ca %s\n", ca);
    return 0;
}
#endif

#if 0
//example 14
int book_ticket()
{
    static int ticket_sold=0;
    ticket_sold++;
    return ticket_sold;
}
int main()
{
    int count;
    count=book_ticket();
    count=book_ticket();
    count=book_ticket();
    printf("%d\n", count);
    return 0;
}
#endif

#if 0
//example 15
int main()
{
    static int i=5;
    if(--i)
    {
        main();
    }
    printf("i %d\n", i);
    return 0;
}
#endif

#if 0
//example 15(changes)
int main()
{
    static int i=5;
    printf("i %d\n", i);
    if(--i)
    {
        main();
    }
    printf("i %d\n", i);
    return 0;
}
#endif

#if 0
//example 16
int main()
{
    static int i=5;
    if(--i)
    {
        return main();
    }
    printf("%d\n", i);
    return 0;
}
#endif

#if 0
//example 16(changes)
int main()
{
    static int i=5;
    printf("i %d\n", i);
    if(--i)
    {
        return main();
    }
    printf("i %d\n", i);
    return 0;
}
#endif

#if 0
//example 17
int foo()
{
    static int i;
    return i;
}
int main()
{
    static int x=foo();//error, for static variables we shud initialize only with constant values
    //x=foo();//this is allowed
    printf("x %d\n", x);
    return 0;
}
#endif

#if 0
//example 18
int *foo()
{
    static int i=10;
    int *j=&i;
    return j;
}
int main()
{
    int *i;
    i=foo();
    printf("*i %d\n", *i);
    return 0;
}
#endif

#if 0
//example 19
int *foo()
{
    int i=10;
    //int *j=&i;//error, function returns address of local variable
    static int *j=&i;//error, static variable shud be initialized with only constatnt values
    return j;
}
int main()
{
    int *i;
    i=foo();
    printf("*i %d\n", *i);
    return 0;
}
#endif

#if 0
//example 20
int x;
int foo()
{
    printf("x %d\n", x);
    return ++x;
}
int main()
{
    foo();
    printf("x %d\n", x);
    return 0;
}
#endif

#if 0
//example 21
auto int x;//auto is local, cannot be used as global
int foo()
{
    printf("x %d\n", x);
    return ++x;
}
int main()
{
    foo();
    printf("x %d\n", x);
    return 0;
}
#endif

#if 0
//example 22
register int x;//register is local, cannot be used as global
int foo()
{
    printf("x %d\n", x);
    return ++x;
}
int main()
{
    foo();
    printf("x %d\n", x);
    return 0;
}
#endif

#if 0
//example 23
int x=10;
int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}
#endif

#if 0
//example 24
int x=10;
int x;//tentative definition, in c program, it can have multiple tentative definition but not multiple initialization
int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}
#endif

#if 0
//example 25
int x=10;
int x=20;//error, redefinition of x
int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}
#endif

#if 0
//example 26
static int x=10;
int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}
#endif

#if 0
//example 27
static int x=10;//internal linkage
int x;//error, same variable name with external linkage, non-static declaration of ‘x’ follows static declaration
int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}
#endif

#if 0
//example 27(changes)
int x;//external linkage
static int x=10;//compilation error, same variable name with internal linkage, static declaration of ‘x’ follows non-static declaration
int foo()
{
    printf("x %d\n", x);
    return 0;
}
int main()
{
    foo();
    return 0;
}
#endif

#if 0
//example 28
#include<unistd.h>
int num;
void fun1();
void fun2();
int main()
{
    while(1)
    {
        num++;
        fun1();
        sleep(1);
        fun2();
        sleep(1);
    }
    return 0;
}
#endif

#if 0
//example 31
int num;
void fun1();
int main()
{
    while(1)
    {
        num++;
        fun1();
        sleep(1);
    }
    return 0;
}
#endif

#if 0
#include<stdio.h>
int main()
{
    int x;
    {
        int x=10;
        {
            extern int x;
            printf("%d\n", x);//20
        }
        printf("%d\n", x);
    }
    printf("%d\n", x);

}
int x=20;
//static int x=20;//internal linkage
#endif

#if 0
int main()
{
    int num;
    num=123;
    num=234;
    num=345;
    return 0;
}
#endif

#if 0
#include<unistd.h>
int main()
{
    int i, j, k;
    for(i=1; i<=100; i++)
    {
        printf("\rLoading [");
        for(j=1; j<=100; j++)
        {
            j<=i?putchar('#'):putchar(' ');
        }
        printf("] %3d%%", i);
        fflush(stdout);
        usleep(10000);
        //for(k=0xfffffff; k--; );
    }
    printf("\nFinished\n");
    return 0;
}
#endif

#if 1
#include<unistd.h>
#include<string.h>
void rotate(char arr[], int n);
int main()
{
    char str[]="Sanketh T S                               ";
    int len=strlen(str), k;
    while(1)
    {
        printf("\r%s", str);
        fflush(stdout);
        for(k=0xfffffff; k--;);
        //sleep(1);
        rotate(str, len);
    }
    return 0;
}

void rotate(char arr[], int n)
{
    int i;
    char temp=arr[0];
    for(i=0; i<n-1; i++)
    {
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        
    }
    //arr[n-1]=temp;
}
#endif