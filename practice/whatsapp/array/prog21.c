//Find All Elements Greater Than a Given Number

#include<stdio.h>
int main()
{
    int size, num, flag=0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i=0; i<size; i++)
    {
        if (arr[i]>num)
        {
            printf("%d ", arr[i]);       
        }
        else
        {
            flag=1;
            if (flag==1)
            {
                printf("These numbers are not greater than %d: %d\n", num, arr[i]);
            }
        }
    }
    
    printf("\n");
}