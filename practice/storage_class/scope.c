//to check scope(block,function,program)
#if 0
#include<stdio.h>
void fun();
int a=50;
int b=45;
int main()
{
    //int a=1;
    fun();
    {
        int a=12;
        printf("Inside block1: %d\n", a);
    }
    {
        printf("Inside block2: %d\n", a++);
    }
    printf("Inside main: %d\n", a);
}
void fun()
{
    int a=23;
    printf("Inside function block: %d\n", a);
    printf("Inside function block: %d\n", b);
}
#endif