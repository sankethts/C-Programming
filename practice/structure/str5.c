//structure padding
/*
#include<stdio.h>
struct student
{
    char a;
    float b;
    char c;
}s;
int main()
{
    printf("%zu\n", sizeof(s));//12
    printf("%zu\n", sizeof(struct student));//12
}
*/
/*
#include<stdio.h>
struct student
{
    char a;
    char c;
    float b;
}s;
int main()
{
    printf("%zu\n", sizeof(s));//8
    printf("%zu\n", sizeof(struct student));//8
}
*/
/*
#include<stdio.h>
struct student
{
    char a;
    char c;
    double b;
}s;
int main()
{
    printf("%zu\n", sizeof(s));//16
    printf("%zu\n", sizeof(struct student));//16
}
*/

#include<stdio.h>
struct student
{
    char a;
    int c;
    double b;
}s;
int main()
{
    printf("%zu\n", sizeof(s));//16
    printf("%zu\n", sizeof(struct student));//16
}
