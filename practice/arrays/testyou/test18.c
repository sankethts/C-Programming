//wap to right shift array by 1
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
    int temp=arr[size-1];
    for(int i=size-1; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}
*/

//right shift k times
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
        int temp=arr[size-1];
        for(int j=size-1; j>0; j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    for(int j=0; j<size; j++)
    {
        printf("%d ", arr[j]);
    }
}