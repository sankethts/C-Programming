#include<stdio.h>
extern int num;

static int func2()
{
    printf("num is %d from file2\n", num);
    return 0;
}
int func1()
{
    func2();
}