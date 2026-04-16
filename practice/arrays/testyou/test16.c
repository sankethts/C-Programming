//wap to merge two arrays

//with using third array
#include<stdio.h>
int main()
{
    int size1, size2;
    printf("Enter the size of array1: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of array1: ");
    for(int i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of array2: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the elements of array2: ");
    for(int i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[size1+size2];
    for(int i=0; i<(size1+size2); i++)
    {
        if(i<size1)
        {
            arr3[i]=arr1[i];
        }
        else
        {
            arr3[i]=arr2[i-size1];
        }
    }
    printf("Merged array:\n");
    for(int i=0; i<(size1+size2); i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
}

/*
//without using third array
#include<stdio.h>
int main()
{
    int size1, size2;
    printf("Enter the size of array1: ");
    scanf("%d", &size1);
    int arr1[100];
    printf("Enter the elements of array1: ");
    for(int i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of array2: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the elements of array2: ");
    for(int i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    for(int i=0; i<size2; i++)
    {
        arr1[i+size1]=arr2[i];
        
    }
    printf("Merged array:\n");
    for(int i=0; i<(size1+size2); i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}
*/

//wap to merge two arrays in sorted order
