#include<stdio.h>
#include<unistd.h>
#if 1
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
        printf("%d\n", num);
    }
    return 0;
}
#endif