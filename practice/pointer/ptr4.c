//pointer assignment


/*
#include<stdio.h>
int main()
{
    int a=10, b=11;
    int *p, *q;
    p=&a;
    q=p;
    printf("a= %d, %d, %d\n", a, *p, *q);
}
*/
/*
#include<stdio.h>
int main()
{
    int a=10, b=11;
    int *p, *q;
    p=&a;
    *q=*p;//it should give segmentation fault, but not giving in vs code or it shud give undefined behaviour
    printf("a= %d, %d, %d\n", a, *p, *q);
}
*/

#include<stdio.h>
int main()
{
    int a=10, b=11;
    int *p, *q;
    p=&a;
    q=&b;
    q=p;
    printf("a= %d, %d, %d\n", a, *p, *q);
}