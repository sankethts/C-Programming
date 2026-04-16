//wap to remove element from an array
//1 5  2 7 5 11
//remove 2

#include<stdio.h>
int main()
{
    int size, num=2;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<size; i++)
    {
        if (arr[i]==num)
        {
            for (int j=i; j<size-1; j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            i--;//duplicate values
        }
    
    }  
    printf("After removing\n");
    for (int k=0; k<size; k++)
    {
        
        printf("%d", arr[k]);
        printf("\n");
    }
}