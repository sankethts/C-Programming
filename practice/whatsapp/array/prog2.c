//Square Each Element of an Array

#include<stdio.h>
int main()
{
    int size;
    printf("Enter size af an array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Elements after squaring: ");
    for (int i=0; i<size; i++)
    {
        arr[i]=arr[i]*arr[i];
        printf("%d ", arr[i]);
    }
    printf("\n");
}