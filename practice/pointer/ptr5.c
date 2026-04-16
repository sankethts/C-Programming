//Double pointer: It is a pointer which stores the address of another pointer

#include<stdio.h>
int main()
{
    int a=10, b=5;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("Value of a = %d %d %d %d\n", a, *p, **q, ***r);
    printf("Address of a = %x %x\n", p, &a);
    printf("Address of p = %x %x\n", q, &p);
    printf("Address of q = %x %x\n", r, &q);
    printf("Address of r = %x\n", &r);
}