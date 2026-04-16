//Pointer arithmetic
/*
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=&arr;
    printf("Value of arr[0] = %d\n", *p);
    printf("Address of arr = %u %u\n", p, &arr);
    p=p+2;
    printf("Address of arr = %u %u\n", p, &arr);
    printf("Value of arr = %d\n", *p);
}
*/
/*
#include<stdio.h>
int main()
{
    char ch='a';
    char *cptr=&ch;
    int a=11;
    int *ptr=&a;

    printf("%u\n", cptr);
    printf("%u\n", cptr+1);

    printf("%u\n", ptr);
    printf("%u\n", ptr+2);
}
*/
/*
#include<stdio.h>

int update(int a)//call by value
{
    return a+1;

}
int main()
{
    int a=45;
    printf("%d\n", a);
    a=update(a);
    printf("%d\n", a);
}
*/

/*
#include<stdio.h>
int update(int a, int b)//call by value
{
    a=a+1;
    b=b+1;
    return a,b;

}
int main()
{
    int a=45, b=10;
    printf("%d %d\n", a, b);
    a,b=update(a,b);
    printf("%d %d\n", a, b);
}
*/
/*
#include<stdio.h>
int update(int *a, int *b)//call by reference
{
    *a=*a+1;
    *b=*b+1;
}
int main()
{
    int a=45, b=10;
    printf("Before updation: %d %d\n", a, b);
    update(&a,&b);
    printf("After updation: %d %d\n", a, b);
}
*/
/*
#include<stdio.h>
void math(int *add, int *sub, int a, int b)
{
    *add=a+b;
    *sub=a-b;
}
int main()
{
    int a=45, b=10, add, sub;
    math(&add,&sub,a,b);
    printf("%d %d\n", add, sub);
}
*/
/*
#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40};//change 20 to 45
    int *ptr=&arr[0];
    
}
*/
/*
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int *p;
    p=a;
    printf("%p\n", p);
    printf("%d %d\n", *p++, *++p);//Undefined behaviour
    printf("%d\n", *p);
    printf("%d %d %d\n", --(*p), (*p)++, ++(*p));//Undefined behaviour
}
*/



