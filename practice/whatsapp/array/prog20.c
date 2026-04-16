//Check whether the array contains any duplicate values.

#include<stdio.h>
int main()
{
    int size, count=0, flag=0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<=size-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        printf("Contains duplicates\n");
    }
    else
    {
        printf("Not contain duplicates\n");
    }
}