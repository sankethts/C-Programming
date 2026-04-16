//wap to insert new value in sorted list array

#include<stdio.h>
int main()
{
    int size, val;
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter new value to insert: ");
    scanf("%d", &val);
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(val<arr[j] && val>arr[j-1])
            {
                arr[i+1]=arr[i];
                arr[i]=val;
            }
            size++;

        }
        
    }
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

}