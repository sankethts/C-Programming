// Find the sum of an array

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

    int sum=0;
    for (int i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of an array is: %d\n", sum);
    
}