//Find difference between largest and smallest number

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

    int smallest=arr[0];
    
    for (int i=0; i<size; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }

    printf("Difference = %d\n", largest-smallest);
    printf("\n"); 
}