//Find the difference between the sum of even and odd numbers in an array.

#include<stdio.h>
int main()
{
    int size, diff=0, sum_even=0, sum_odd=0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<size; i++)
    {
        if (arr[i]%2==0)
        {
            sum_even=sum_even+arr[i];     
        }
        else 
        {
            sum_odd=sum_odd+arr[i];
        }
    }
    printf("Difference= %d", sum_even-sum_odd);
    printf("\n");
}