//Print prime numbers from an array

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of an array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Prime numbers from array are:\n");
    int flag;
    for (int i=0; i<size; i++)
    {
        if (arr[i]>0)
        {
            if (arr[i]==1)
            {
                continue;
            }
            flag=0;
            for (int j=2;j<arr[i]; j++)
            {
                if (arr[i]%j==0)
                {
                    flag=1;
                }
                
            }
            if (flag==0)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    printf("\n");
}



