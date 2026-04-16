#include<stdio.h>
#if 0
int main()
{
    int a=5;
    int *ptr=&a;
    printf("%d\n", *ptr);
    char b='7';
    ptr=&b;
    printf("%c\n", *ptr);

}
#endif

#if 0
int main()
{
    int a = 10;
    int *p = &a;
    printf("%p %p\n", p, p+1);
    printf("%d %d\n", p, p+1);
}
#endif

#if 0  
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 5, y = 10;
    swap(&x, &y);
    printf("%d %d\n", x, y);
}

int main()
{
    int a = 9;
    int *p = &a;
    int **q = &p;

    printf("%d\n", **q);
}

int main()
{
    float y=2.1;
    int a = 9, x=9, *ptr;
    ptr=&x;
    ptr=&a;
    printf("%p\n", &a);
    printf("%p\n", &x);
    printf("%p\n", ptr);
}

#include<stdio.h>
int main()
{
    int a[]={10,11,-1,56,67,5,4};
    int *p, *q;
    p=a;
    q=&a[0]+3;
    printf("%d %d %d\n", (*p)++, (*p)++, *(++p));
    printf("%d\n", *p);
    printf("%d\n", (*p)++);
    printf("%d\n", (*p)++);
    q--;
    printf("%d\n", (*(q+2))--);
    printf("%d\n", *(p+2)-2);
    printf("%d\n", *(p++ - 2)-1);
}
 #endif