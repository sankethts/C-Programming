//array examples: whatsapp 5/2/26
//Print only even numbers from an array

#include<stdio.h>
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Even numbers:\n");
    for (int i=0; i<size; i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}