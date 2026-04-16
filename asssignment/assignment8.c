//wap to find the median of two unsorted arrays

#include<stdio.h>
int main()
{
    int m, n, i, j;
    float median, median1;
    printf("Enter the 'm' value of Array A: ");
    scanf("%d", &m);
    printf("Enter the 'n' value of Array B: ");
    scanf("%d", &n);
    
    int arr1[m], arr2[n];
    
    printf("Enter the elements one by one for Array A: ");
    for (int i=0; i<m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the elements one by one for Array B: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    for (int i=0; i<m; i++)
    {
        for (int j=i+1; j<m; j++)
        {
            if (arr1[i]>arr1[j])
            {
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
                
            }
        }
    }
    
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr2[i]>arr2[j])
            {
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
                
            }
        }
    }
    
    /*for (int i=0; i<m; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr2[i]);
    }*/
    
    if (m%2==0)
    {
        median=(arr1[(m/2)-1]+arr1[m/2])/2.0;
    }
    else
    {
        median=arr1[m/2];
    }
    printf("\nMedian of array1: %g", median);
    
    if (n%2==0)
    {
        median1=(arr2[(n/2)-1]+arr2[n/2])/2.0;
    }
    else
    {
        median1=arr2[n/2];
    }
    printf("\nMedian of array2: %g", median1);
    
    printf("\nMedian of both arrays: %g", (median+median1)/2.0);
}
