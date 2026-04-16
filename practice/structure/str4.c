//unions
/*
#include<stdio.h>
union abc
{
    int a;
    char b;
    float c;
};
int main()
{
    union abc u;
    printf("%zu\n", sizeof(union abc));//4
    u.a=45;
    u.b='s';
    u.c=12.34;
    printf("%d\n", u.a);//gv
    printf("%c\n", u.b);//gv
    printf("%f\n", u.c);//12.34
}
*/

#include<stdio.h>
union abc
{
    int a;
    char b;
    float c;
};
int main()
{
    union abc u;
    union abc *ptr=&u;
    printf("%zu\n", sizeof(union abc));//4
    u.a=45;
    u.b='s';
    u.c=12.34;
    printf("%d\n", (*ptr).a);//gv
    printf("%c\n", (*ptr).b);//gv
    printf("%f\n", (*ptr).c);//12.34
}