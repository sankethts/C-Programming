//Count how many elements in the array are positive, negative, or zero.

#include<stdio.h>
int main()
{
    int size, num, count_pos=0, count_neg=0, count_zero=0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<size; i++)
    {
        if (arr[i]>0)
        {
            count_pos++;     
        }
        else if (arr[i]<0)
        {
            count_neg++;
        }
        else 
        {
            count_zero++;
        }
    }
    printf("Positive= %d\nNegetive= %d\nZero= %d\n", count_pos, count_neg, count_zero);
    printf("\n");
}