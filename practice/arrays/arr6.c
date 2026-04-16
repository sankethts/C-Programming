//wap to find largest number from an array

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }  
    printf("Largest value in an array is %d\n", largest);
}    