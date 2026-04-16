//Swap the first and last elements of the array

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    if (size>1)
    {
        int temp=arr[0];
        arr[0]=arr[size-1];
        arr[size-1]=temp;
        
    }
    printf("After swapping:\n");
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}