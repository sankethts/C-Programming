// 1) Two sum
#include<stdio.h>
#include<stdlib.h>
int *two_sum(int *arr, int size, int target);
int main()
{
    int size, target;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements for the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target: ");
    scanf("%d", &target);
    int *ptr = two_sum(arr, size, target);
    printf("[%d, %d]\n", ptr[0], ptr[1]);
    return 0;
}
int *two_sum(int *arr, int size, int target)
{
    int *ptr = malloc(2*sizeof(int));
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                ptr[0]=i;
                ptr[1]=j;
                return ptr;
            }
        }
    }
    *ptr=0;
    return NULL;
}