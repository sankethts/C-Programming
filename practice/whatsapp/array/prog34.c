//Find the largest number from an array

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

    int largest=arr[0];
    
    for (int i=0; i<size; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("\n"); 
}