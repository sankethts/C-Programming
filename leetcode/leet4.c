//4) Median of two sorted arrays
#include<stdio.h>
float median(int *arr1, int size1, int *arr2, int size2);
int main()
{
    int size1, size2;
    printf("Enter size for array1: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements for array1: ");
    for(int i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size for array2: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the elements for array2: ");
    for(int i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("Median = %f\n", median(arr1, size1, arr2, size2));
    return 0;
}
float median(int *arr1, int size1, int *arr2, int size2)
{
    int size3 = size1 + size2;
    int arr3[size3];
    for(int i=0; i<size3; i++)
    {
        if(i<size1)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[i-size1];
        }
    }
    for(int i=0; i<size3-1; i++)
    {
        for(int j=i+1; j<size3; j++)
        {
            if(arr3[i] > arr3[j])
            {
                int temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    if(size3%2==0)
      return (arr3[(size3-1)/2] + arr3[size3/2])/2.0f;
    else
      return arr3[size3/2]/1.0f;
}