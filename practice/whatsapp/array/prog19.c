//Find the difference between the largest and smallest number in an array.

#include<stdio.h>
int main()
{
    int size, count=0, j=1;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
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
    printf("Largest = %d\nSmallest = %d\n", largest, smallest);
    printf("Difference = %d", largest-smallest);
    printf("\n");
}