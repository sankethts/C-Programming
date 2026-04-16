//Find the index of a given number in the array. If not found,-1.

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
        if (arr[i]==num)
        {
            printf("Index is %d\n", i);
            flag=1;
        }
    }
    if (flag==0)
    {
        printf("-1\n");        
    }
    printf("\n");
}