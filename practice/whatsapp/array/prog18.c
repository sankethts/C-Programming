//Modify the array by replacing every negative number with 0

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
    
    for (int i=0; i<size; i++)
    {
        if (arr[i]<0)
        {
            arr[i]=0;
        }
    }
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}