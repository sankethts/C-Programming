//wap to print prime numbers from array
#include<stdio.h>
int main()
{
    int size, count=0, flag=0;
    printf("Enter size of an array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements in the array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<size; i++)
    {
        for (int j=2; j<arr[i]; j++)
        {
            if (arr[i]%j!=0)
            {
                flag=0;
                break;
            }
            if (flag==1)
            {
                printf("%d ", arr[i]);
            }
        }
        
    }   
}