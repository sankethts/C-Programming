//wap to print all unique elements in an array

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size], unique[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count=0, flag=0;
    for(int i=0; i<size; i++)
    {
        count=0;
        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}


