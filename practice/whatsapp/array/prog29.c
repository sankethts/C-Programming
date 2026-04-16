//two array are equal

#include<stdio.h>
int main()
{
    int arr[3]={1,2,7}, arr1[3]={1,2,3}, flag=0;
    for (int i=0; i<3; i++)
    {
        if (arr1[i]!=arr[i])
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("Two arrays are equal\n");
    }
    else
    {
        printf("Two arrays are not equal\n");
    }
}