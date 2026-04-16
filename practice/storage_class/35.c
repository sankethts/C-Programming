#include<stdio.h>
#include<unistd.h>
int fun1();
int num;
int main()
{
    while(1)
    {
        num++;
        fun1();
        //sleep(1);
        printf("%d\n", num);
    }
    return 0;
}