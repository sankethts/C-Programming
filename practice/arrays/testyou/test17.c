//wap to left shift the array
/*
#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp=arr[0];
    for(int i=0; i<size-1; i++)
    {
        arr[i]=arr[i+1];

    }
    arr[size-1]=temp;
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}
*/

//wap to Left Rotation by k Positions
#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter how many times you want to shift: ");
    scanf("%d", &k);
    k=k%size;
    for(int i=0; i<k; i++)
    {
        int temp=arr[0];
        for(int j=0; j<size-1; j++)
        {
            arr[j]=arr[j+1];
        }
        arr[size-1]=temp;
    }
    for(int j=0; j<size; j++)
    {
        printf("%d ", arr[j]);
    }
}