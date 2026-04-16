//wap to print unique elements in the array
#include<stdio.h>
int main()
{
    int size, count=0;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size; i++)
    {
        count=0;
        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}