//wap to search for the given element in the array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    int key, flag=0;
    scanf("%d", &key);
    for(int i=0; i<size; i++)
    {
        if(key==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
    }
}