//wap to sort the array using bubble sort(compare adjacent elements and swap them)
/*
number of passes = size-1  ->  in each pass, one element gets placed in its correct position, 
in pass1, largest element moves to last position, and so on..

size-1-i  ->  because after every pass, the last elements are already sorted, so we reduce the comparisions
*/


//ascending order
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size-1; i++)//number of passes
    {
        for(int j=0; j<size-1-i; j++)//compare adjacent elements, size-1-i->last elements already sorted
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("After sorting:");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
//descending order
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size-1; i++)//number of passes
    {
        for(int j=0; j<size-1-i; j++)//compare adjacent elements, size-1-i->last elements already sorted
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("After sorting:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/