//bubble sort

//ascending order
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<size-1; i++)//number of passes to sort the array
    {
        int flag=0;//to check if any swapping is done in the current pass
        for (int j=0; j<size-1-i; j++)//After each pass, the largest element is placed at its correct position, so we reduce the number of comparisons.
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;//if swapping is done, set flag to 1
            }
        }
        if (flag==0)//if no swapping is done, the array is already sorted, so we can break the loop
        {
            break;
        }
    }
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//descending order
/*
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<size-1; i++)//number of passes to sort the array
    {
        int flag=0;//to check if any swapping is done in the current pass
        for (int j=0; j<size-1-i; j++)//After each pass, the largest element is placed at its correct position, so we reduce the number of comparisons.
        {
            if (arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;//if swapping is done, set flag to 1
            }
        }
        if (flag==0)//if no swapping is done, the array is already sorted, so we can break the loop
        {
            break;
        }
    }
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/
/*
//selection sort
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/