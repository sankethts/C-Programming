// Find number with maximum frequency

#include<stdio.h>
int main()
{
    int size;//9
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size], count=0, maxfreq=0, element;//1 2 4 4 4 3 3 8 8
    printf("Enter the elements of an array: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<size; i++)
    {
        count=1;
        for (int j=i+1; j<size; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count>maxfreq)
        {
            maxfreq=count;
            element=arr[i];
        }
    }

    printf("Largest frequent number is %d and it appears %d times", element, maxfreq);
    printf("\n"); 
}