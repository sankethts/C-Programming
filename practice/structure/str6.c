//structure packing
/*
#include<stdio.h>
#pragma pack(1)
struct student
{
    char a;
    float b;
    char c;
}s;
int main()
{
    printf("%zu\n", sizeof(s));//6
    printf("%zu\n", sizeof(struct student));//6
}
*/

#include<stdio.h>
#pragma pack(1)
struct student
{
    char a;
    double b;
    int c;
}s;
int main()
{
    printf("%zu\n", sizeof(s));//6
    printf("%zu\n", sizeof(struct student));//6
}