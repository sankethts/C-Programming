//Remove duplicates from an array

#include<stdio.h>
int main()
{
    int size;//5
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];//1 2 2 3 3
    printf("Enter the elements of an array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                for (int k=j; k<=size-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;//to recheck current position
            }
        }
    }
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}