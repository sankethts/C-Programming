//auto storage class
#include<stdio.h>
#if 0
//auto int x=90;//error
int main()
{
    auto int x;
    //auto int x=54;
    {
        auto int x=34;
        printf("%d\n", x);
    }
    printf("%d\n", x);
}
#endif

#if 0
int num;
void fun2()
{
    printf("num is %d from file2\n", num);
}
#endif