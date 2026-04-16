//wap to remove an element from an array
/*
#include<stdio.h>
int main()
{
    int size, num=0, flag=0;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to remove: ");
    scanf("%d", &num);
    for (int i=0; i<size; i++)
    {
        flag=0;
        if (arr[i]==num)
        {
            flag=1;
            for (int j=i; j<size-1; j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            i--;//duplicate values
        }
    }  
    if(flag==0)
    {
        printf("Not found in the array\n");
    }
    else
    {
        printf("After removing\n");
        for (int k=0; k<size; k++)
        {  
            printf("%d ", arr[k]);
        }
    }
    printf("\n");
}
*/


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
    int position;
    scanf("%d", &position);
    if(position>=0 && position<size)
    {
        for(int i=position-1; i<size-1; i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
        printf("After removing: ");
        for(int i=0; i<size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid position\n");
    }
    
}
