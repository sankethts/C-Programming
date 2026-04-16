
#include<stdio.h>
int main()
/*
{
    int size;
    printf("Enter size: ");//4
    scanf("%d", &size);
    int arr[size];
    printf("%zu\n", sizeof(arr));//16=array size * sizeof array datatype
}
*/
/*
{
    int arr[4]={0,1,2,3};
    printf("%d\n", arr[0]);//0
    printf("%d\n", arr[2]);//2
}
*/
/*
{
    int arr[4]={1,2,3,4};
    printf("%d\n", arr[0]);//1
    arr[0]=-3;
    arr[2]=0;
    for (int i=0; i<4; i++)
    {
        printf("%d ", arr[i]);//-3,2,0,4
    }
    printf("\n");
}
*/
/*
{
    int arr[4]={ };
    for (int i=0; i<4; i++)
    {
        printf("%d ", arr[i]);//0 0 0 0
    }
    printf("\n");
}
*/
/*
{
    int arr[5]={1,2,3,4,5};
    printf("%p\n", &arr);
    printf("%p\n", &arr[0]);

    printf("%d\n", &arr);
    printf("%d\n", &arr[0]);

    printf("%u\n", &arr);
    printf("%u\n", &arr[0]);

}
*/
/*
{
    int arr[5]={1,2,3,4,5};
    for (int i=0; i<5; i++)
    {
        printf("%p\t", &arr[i]);
        printf("%u\n", &arr[i]);
    }
}
*/
/*
{
    int arr[5];
    printf("Enter array elements:\n");
    for (int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<5; i++)
    {
        printf("\narray element at index %d is: %d", i, arr[i]);
    }

}
*/

//wap to read marks of five students and calculate their sum and average.
/*
{
    int marks[5], sum=0;
    float avg;
    printf("Enter the marks of 5 students:\n");

    for (int i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i=0; i<5; i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("The sum is %d and avg is %f\n", sum, avg);
}
*/

//wap to read array of 10 integers and count total number of even and odd elements in array
/*
{
    int arr[10], even=0, odd=0;
    printf("Enter 10 integers:\n");

    for (int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Numbre of Even elements are: %d\n", even);
    printf("Numbre of Odd elements are: %d\n", odd);
}
*/

//wap to read 2 arrays and store their sum in 3rd array
/*
{
    int a[5], b[5], c[5];
    printf("Enter the elements of first array:\n");
    for (int i=0; i<5; i++)
    {  
        scanf("%d", &a[i]);
    } 
   printf("Enter the elements of second array:\n");
    for (int i=0; i<5; i++)
    {      
        scanf("%d", &b[i]);
    }
    for (int i=0; i<5; i++)
    {
        c[i]=a[i]+b[i];
        printf("Sum at index %d is %d\n", i, c[i]);
    } 
}
*/



{
    int arr[5], i=0;
    while(i<5)
        arr[i]=++i;

    for(i=0; i<5; i++)
        printf("%d, ", arr[i]);

    return 0;
}