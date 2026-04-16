#include<stdio.h>
#if 0
int main()
{
    int num=10;
    int *ptr1=&num;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;

    printf("%p\n", ptr3);
    printf("%p\n", *ptr3);
    printf("%p\n", **ptr3);
    printf("%d\n", ***ptr3);
}
#endif

#if 1
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("%u\n", arr);
    printf("%u\n", &arr[0]);
    printf("%u\n", &arr);

    printf("%u\n", arr+1);
    printf("%u\n", &arr[0]+1);
    printf("%u\n", &arr+1);
    return 0;
}
#endif