//Copying from Another Array
/*
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int arr1[size];
    printf("Copied array elements are: ");
    for (int i=0; i<size; i++)
    {
        arr1[i]=arr[i];
        printf("%d ", arr1[i]);
    }
    printf("\n");  
}
*/

#include<stdio.h>
int main()
{
    int num=0x5680;
    unsigned char *ptr=&num;
    //printf("%hhx\n", *ptr);
    if (*ptr==0x80)
    {
        printf("Ours is a little endian\n");
    }
    else
    {
        printf("Big\n");
    }
}