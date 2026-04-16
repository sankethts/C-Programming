#include<stdio.h>
extern char num;//in 35.c it is int num; but here extern char num; this will not give error, datatype is different for same variable but in different file 35.c and 36.c 
int fun1()
{
    printf("num is %d from file1\n", num);
    return 0;
}