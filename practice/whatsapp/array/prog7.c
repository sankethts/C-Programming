//Find Largest and Smallest Number

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
    int largest=arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("Largest: %d", largest);
    printf("\n");

    int smallest=arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("Smallest: %d", smallest);
    printf("\n");
}