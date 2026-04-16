//pointer traversal without index
/*
arr      = address of arr[0]
arr + 5  = address after arr[4]
*/

#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p = arr;

    while(p < arr+5)
    {
        printf("%d ", *p);
        p++;
    }
}
