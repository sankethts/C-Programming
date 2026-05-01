#include<stdio.h>
#if 0
void foo()
{
    printf("this print from function: %s,", __func__);
    printf("line no.: %d\n", __LINE__);
}
int main()
{
    printf("program: %s\n", __FILE__);
    printf("was compiled on %s at %s\n", __DATE__, __TIME__);
    foo();
    return 0;
}
#endif

#if 0
//#define SET_BIT(num, pos)  num | (1<<pos)
#define SET_BIT(num, pos)  (num | (1<<pos))
int main()
{
    printf("%d\n", 2 * SET_BIT(0,2));
    return 0;
}
#endif

#if 0
#define SQUARE(num)  num*num
#define SQUARE(num)  (num*num)
#define SQUARE(num)  (num)*(num)
int main()
{
    printf("%d\n", SQUARE(5));
    printf("%d\n", SQUARE(3+2));
    return 0;
}
#endif

#if 0
//wam to find sum of two no
#define SUM(n1,n2) (n1) + (n2)
int main()
{
    printf("Sum = %d\n", SUM(10+10,20+20));
}
#endif

#if 0
//wap to get, set, and clear nth bit in an integer
#define GET(num, n) (num) & ((1<<(n))-1)
#define SET(num, n) (num) | ((1<<(n))-1)
#define CLEAR(num, n) (num) & ~((1<<(n))-1)
int main()
{
    int num=20, n=2;
    printf("GET = %d\n", GET(20,2));
    printf("SET = %d\n", SET(20,2));
    printf("CLEAR = %d\n", CLEAR(20,2));
    return 0;
}
#endif

#if 0
//wam to swap nibble in byte
#define SWAP(num) 
int main()
{
    printf("%x\n", SWAP(AB));

}
#endif

#if 1
//swap two numbers using macro
#define SWAP(datatype,a,b)    \
{ \
        datatype temp=a;  \
                a=b;         \
                b=temp;      \ 
}

int main()
{
    int n1=10, n2=20;
    char c1='a', c2='b';
    SWAP(int, n1, n2);
    printf("aft: %d %d\n", n1, n2);
    SWAP(char, c1, c2);
    printf("aft: %c %c\n", c1, c2);
    return 0;
}
#endif

#if 0
#define SWAP(a,b)    \
{                    \
        int temp=a;  \
        a=b;         \
        b=temp;      \
} 


int main()
{
    int n1=10, n2=20;
    SWAP(n1, n2);
    printf("%d %d\n", n1, n2);
    SWAP(n1, n2);
    printf("%d %d\n", n1, n2);
    return 0;
}
#endif

#if 0
#define WARN_IF(EXP)\
do\
{\
    x--;\
    if(EXP)\
    {\
        fprintf(stderr, "warning: " #EXP "\nsankat");\
    }\
}while(x); \

int main()
{
    int x=5;
    WARN_IF(x==0);
    return 0;
}
#endif

#if 0
#include "struct.h"
#include "struct.h"
struct student
{
    char name;
    int id;
}
int main()
{
    return 0;
}
#endif

#if 0
int main()
{
    int x=10, y=20;
    #ifdef SPACE_OPTIMISED
    x=x^y;
    y=y^x;
    x=x^y;
    printf("selected space optimization\n");
    #else
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("selected time optimization\n");
    #endif
    return 0;
}
#endif

#if 0
#define MERGE(exp)  exp##num
int main()
{
    int mynum=123;
    printf("%d\n", MERGE(my));
    return 0;
}
#endif

#if 0
#define SUM(x,y) x+y
int main()
{
    int n1=10, n2=20;
    float f1=12.125, f2=5.625;
    printf("Sum: %d\n", SUM(n1, n2));
    printf("Sum: %d\n", SUM(f1, f2));
    printf("Sum: %d\n", SUM(n1, f2));
}
#endif