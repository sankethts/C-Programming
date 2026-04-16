//extern storage class
#include<stdio.h>
#if 0
#include "support.c"
extern void display();
int x=10;
void main()
{
    display();
}
#endif

#if 1
extern int num;

    void fun1()
    {
        printf("num is %d from file2\n", num);
    }

#endif