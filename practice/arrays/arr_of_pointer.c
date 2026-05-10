//Array of pointers
#include<stdio.h>
#if 0
//Declare an array of integer pointers; assign values and print.
int main()
{
    int *arr[3];
    int a=10, b=20, c=30;
    arr[0]=&a, arr[1]=&b, arr[2]=&c;

    //print values
    for(int i=0; i<3; i++)
    {
        printf("arr[%d] = %d\n", i, *arr[i]);
    }
    printf("\n");

    //print address
    for(int i=0; i<3; i++)
    {
        printf("arr[%d] = %p\n", i, arr[i]);
    }
    return 0;
}
#endif

#if 0
// Understand the difference between int *arr[5] and int (*arr)[5]
int main() 
{
    // ─── int *arr[5] ───
    // array of 5 pointers, each pointer points to an int
    int a = 1, b = 2, c = 3, d = 4, e = 5;

    int *arr[5];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;
    arr[4] = &e;

    printf("int *arr[5] — array of pointers:\n");
    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, *arr[i]);

    // ─── int (*arr)[5] ───
    // pointer to an array of 5 integers
    int nums[5] = {10, 20, 30, 40, 50};

    int (*ptr)[5] = &nums;  // ptr points to the whole array

    printf("\nint (*ptr)[5] — pointer to array:\n");
    for (int i = 0; i < 5; i++)
        printf("ptr[%d] = %d\n", i, (*ptr)[i]);

    // difference in pointer arithmetic
    printf("\nPointer arithmetic difference:\n");
    printf("arr+1 jumps by %zu bytes (one pointer)\n", sizeof(arr[0]));
    printf("ptr+1 jumps by %zu bytes (entire array)\n", sizeof(*ptr));

    return 0;
}
#endif

#if 0
// Use an array of pointers to point to different things.
int main()
{
    int *arr[3];
    int a1[4]={1,2,3,4};
    int a2[5]={9,8,7,6,5};
    int a3=100;

    arr[0] = a1;
    arr[1] = a2;
    arr[2] = &a3;

    //a1[5]
    printf("arr[0]\n");
    for(int i=0; i<4; i++)
    {
        printf("%d ", arr[0][i]);
    }
    printf("\n");

    //a1[5]
    printf("arr[1]\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[1][i]);
    }
    printf("\n");

    printf("arr[%d] = %d\n", 2, *arr[2]);

}
#endif