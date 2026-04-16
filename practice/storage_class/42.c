#include<stdio.h>
#include<unistd.h>
int num;
int func1();
int main()
{
    while(1)
    {
        num++;
        func2();
        sleep(1);
    }
    return 0;
}