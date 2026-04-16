//Create array using pointer

//passing array to function
/*
#include<stdio.h>
void array(int *p, int size)
{
    printf("Elements of array are: ");
    for (int i=0; i<size; i++)
    {
        printf("%d ", *(p+i));//p[i]
    }
    printf("\n");
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    int *p=arr;
    for (int i=0; i<size; i++)
    {
        scanf("%d", p+i);//arr[i]
    }
    array(arr, size);
}
*/

//Using pointer like array (pointer indexing)
/*
#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;   
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
}
*/

//using pointer increment
/*
#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *p);
        p++;
    }
}
*/

//using while loop
/*
#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;

    while(p < a + 5)
    {
        printf("%d ", *p);
        p++;
    }

    return 0;
}
*/
/*
#include<stdio.h>
void update(int arr[])
{
    arr[0]=45;
    
}
void output(int arr[], int s)
{
    for (int i=0; i<s; i++)
    {
        printf("%d ", arr[i]);
    }
}
void input(int arr[], int s)
{
    for (int i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int main()
{
    int arr[5];
    input(arr, 5);
    output(arr, 5);
    update(arr);
    output(arr, 5);
}
*/
/*
#include<stdio.h>
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("%d %d\n", *a, *b);
}
int main()
{
    int a=2, b=5;
    swap(&a, &b);
}
*/

//wap to print square and cube of a number in main func
/*
#include<stdio.h>
int num(int *i, int *sq, int *cu)
{
    *sq=(*i) * (*i);
    *cu=(*i) * (*i) * (*i);

}
int main()
{
    int i=5, sq, cu;
    num(&i, &sq, &cu);
    printf("%d %d\n", sq, cu);
}
*/

//print array using recursion
/*
#include<stdio.h>
void print(int arr[], int index, int size)
{
    if (index==size)
    {
        return;
    }
    printf("%d ", arr[index]);
    print(arr, index+1, size);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    print(arr, 0, 5);
}
*/

//reverse array using recursion
/*
#include<stdio.h>
void output(int arr[], int s)
{
    for (int i=0; i<s; i++)
    {
        printf("%d ", arr[i]);
    }
}
void print(int arr[], int first, int last)
{
    if (first>=last)
      return;
    int temp=arr[first];
    arr[first]=arr[last];
    arr[last]=temp;
    print(arr, first+1, last-1);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    output(arr,5);
    printf("\n");
    print(arr,0,4);
    output(arr,5);
    printf("\n");
}
*/

//wap to find max no in array
/*
#include<stdio.h>
void print(int arr[], int max, int index, int size)
{
    if(index==size)
    {
        printf("%d\n", max);
        return;
    }
    if (arr[index]>max)
    {
        max=arr[index];
    }
    print(arr, max, index+1, size);
}
int main()
{
    int arr[5]={5,6,7,1,5};
    print(arr,arr[0],0,5);
}
*/
/*
#include<stdio.h>
int print(int arr[], int max, int index, int size)
{
    if(index==size)
    {
        return max;
    }
    if (arr[index]>max)
    {
        max=arr[index];
    }
    print(arr, max, index+1, size);
}
int main()
{
    int arr[5]={5,6,7,1,5};
    printf("Max = %d\n", print(arr,arr[0],0,5));
}
*/
