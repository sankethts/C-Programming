//wap to delete an element from desired position from an array(don't use extra array)
#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter elements of an array: ");
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position(index) to delete an element from that position: ");
    int index;
    scanf("%d", &index);
    if(index>=0 && index<size)
    {
        for(int i=0; i<size; i++)
        {
            if(arr[index]==arr[i])
            {
                for (int j=i; j<size-1; j++)
                {
                    arr[j]=arr[j+1];
                }
                size--;
            }
        }
    }
    else
    {
        printf("Invalid position\n");
    }
    printf("After removing: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}