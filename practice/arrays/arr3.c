/*wap to search the number in an array
i/p 3,4,5,6,7
key: 3
o/p : found
if key=-1
o/p not found
*/

#include<stdio.h>
int main()
{
    int size, key, flag=0;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter key: ");
    scanf("%d", &key);

    for (int i=0; i<size; i++)
    {
        if (key==arr[i])
        {
            flag=1;
            break; 
        }
    }  

    if (flag==1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
    }
}