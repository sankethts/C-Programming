// Shift Array Elements One Time to the Left

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of an array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int temp=arr[0];
    for (int i=0; i<size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[3]=temp;

    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}