//wap to find the difference b/w largest number and smallest number
//if i/p: 2,4,5,6
//o/p: 6-2=4

#include<stdio.h>
int main()
{
    int size, diff;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }  
    printf("Largest value in an array is %d\n", largest);
    int smallest=arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }  
    printf("Smallest value in an array is %d\n", smallest);
    diff=largest-smallest;
    printf("%d\n", diff);

}