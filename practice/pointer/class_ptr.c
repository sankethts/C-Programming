#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
int main()
{
    int num=123;
    int *ptr=&num;
    printf("Num: %d\n", num);
    printf("*ptr: %d\n", *ptr);

    num=999;
    //*ptr=999;//both are same
    printf("Num: %d\n", num);
    printf("*ptr: %d\n", *ptr);
    return 0;
}
#endif

#if 0
int main()
{
    int *ip;
    char *cp;
    float *fp;
    double *dp;

    printf("Size of ip: %zu\n", sizeof(ip));
    printf("Size of cp: %zu\n", sizeof(cp));
    printf("Size of fp: %zu\n", sizeof(fp));
    printf("Size of dp: %zu\n", sizeof(dp));

    printf("Size of *ip: %zu\n", sizeof(*ip));
    printf("Size of *cp: %zu\n", sizeof(*cp));
    printf("Size of *fp: %zu\n", sizeof(*fp));
    printf("Size of *dp: %zu\n", sizeof(*dp));
}
#endif

#if 0
int main()
{
    int num=0x12345678;
    int *ptr=&num;
    char *cptr=&num;
    *cptr=0x11;
    printf("*ptr: %#x\n", *ptr);
    printf("*cptr: %#x\n", *cptr);
    return 0;
}
#endif

#if 0
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr=arr;
    for(int i=0; i<5; i++)
    {
        printf("%d at %u\n", arr[i], &arr[i]);
    }
}
#endif

#if 0
int main()
{
    int arr[5]={10,20,30,40,50};
    int *p1, *p2;
    p1=&arr[1];
    p2=&arr[4];
    int i=(char *)p2 - (char *)p1;
    //int i=(char *)p2 - p1;// this is error, no subtraction b/w two different data types of pointer
    printf("i: %d\n", i);
    return 0;
}
#endif

#if 0
//NULL Pointer
int main()
{
    int *num=NULL;
    //printf("%p\n", num);//(nil)
    printf("%d\n", *num);//segmentation fault
    return 0;
}
#endif

#if 0
int main()
{
    int *num=NULL;
    *num=123;//we r storing it to kernel space, it is wrong(segmentation fault)
    return 0;
}
#endif

#if 0
int main()
{
    int num=0;
    scanf("%d", num);//0 will treated as address and accessing 0(NULL) leads to segmentation fault
    printf("%d\n", num);
    return 0;
}
#endif

#if 0
int main()
{
    double x=7.2;
    void *vptr=&x;

    printf("%hhx\n", *(char *)vptr);
    printf("%hhx\n", *(char *)(vptr+7));
    printf("%hx\n", *(short *)(vptr+3));
    printf("%x\n", *(int *)(vptr+0));
    return 0;
}
#endif
//generic compare, copy
#if 1
void swap(void *first, void *second, int size)
{
    char temp;
    for(int i=0; i<size; i++)
    {
        temp=*(char *)first;
        *(char *)first=*(char *)second;
        *(char *)second=temp;
        first++;
        second++;
    }
}
int main()
{
    int n1=10, n2=20;
    printf("Bef: %d %d\n", n1, n2);
    swap(&n1, &n2, sizeof(int));
    printf("Aft: %d %d\n", n1, n2);

    char c1='A', c2='Z';
    printf("Bef: %c %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("Aft: %c %c\n", c1, c2);
    
    double d1=10.125, d2=20.6125;
    printf("Bef: %lf %lf\n", d1, d2);
    swap(&d1, &d2, sizeof(double));
    printf("Aft: %lf %lf\n", d1, d2);

    int a[3]={11,22,33}, b[3]={99,88,77};
    printf("Bef a: %d %d %d\n", a[0], a[1], a[2]);
    printf("Bef b: %d %d %d\n", b[0], b[1], b[2]);
    swap(a,b,sizeof(a));
    printf("Aft a: %d %d %d\n", a[0], a[1], a[2]);
    printf("Aft b: %d %d %d\n", b[0], b[1], b[2]);
}
#endif

#if 0
int main()
{
    char *ptr;
    ptr=malloc(50);
    //ptr=(char *)malloc(50);//in gcc(smart compiler), it will automatically do type casting, in other compilers, we have to do explicitly type casting
    if(ptr==NULL)//validation
    {
        //printf("Memory allocation failure\n");
        perror("Error: ");
        return -1;
    }
    strcpy(ptr, "vikas is my class mentor");
    puts(ptr);
    free(ptr);
    return 0;
}
#endif

#if 0
int main()
{
    char *ptr;
    ptr=calloc(30,1);
    if(ptr==NULL)
    {
        perror("Error: ");
        return -1;
    }
    strcpy(ptr, "vikas is my mentor");
    puts(ptr);
    free(ptr);
    return 0;
}
#endif

#if 0
//average of array elements using malloc(), calloc()
void read_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
float average_array(int arr[], int size)
{
    float avg;
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/(float)size;
    return avg;
}
int main()
{
    int size, sum=0;
    float avg;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *arr;
    //arr=malloc(size*sizeof(int));
    arr=calloc(size, sizeof(int));
    printf("Enter array elements: ");
    read_array(arr, size);
    avg=average_array(arr, size);
    printf("avg: %g\n", avg);
}
#endif

#if 0
int main()
{
    char *ptr;
    ptr=malloc(5);
    if(ptr==NULL)
    {
        perror("Error: ");
        return -1;
    }
    for(int i=0; i<6; i++)
    {
        ptr[i]='A'+i;
    }
    printf("\n");
    for(int i=0; i<6; i++)
    {
        putchar(ptr[i]);
    }
    printf("\n");
    free(ptr);
    //free(ptr);//double free detected(undefined behaviour)
    for(int i=0; i<6; i++)
    {
        putchar(ptr[i]);//leads to undefined behaviour after free
    }
    printf("\n");
    return 0;
}
#endif

#if 0
char *my_strdup(char *str)
{
    char *cptr;
    cptr=malloc(strlen(str)+1);
    if(cptr==NULL)
    {
        return NULL;
    }
    strcpy(cptr, str);
    return cptr;
}
int main()
{
    char *ptr;
    ptr=my_strdup("sanketh");
    printf("%s\n", ptr);
    free(ptr);
    return 0;
}
#endif

#if 0
int main()
{
    int const num=100;
    int *ptr;
    ptr=&num;
    printf("*ptr: %d\n", *ptr);
    *ptr=200;
    //num=300;//error(read only variable)
    printf("num: %d\n", num);
    return 0;
}
#endif

#if 0
int main()
{
    int num=100;
    int const *ptr;
    ptr=&num;
    printf("*ptr: %d\n", *ptr);
    num=200;
    //*ptr=300;//error
    printf("num: %d\n", num);
    return 0;
}
#endif

#if 0
int main()
{
    int x=10, y=20;
    int *const ptr=&x;
    printf("*ptr: %d\n", *ptr);
    ptr=&y;//error
    printf("*ptr: %d\n", *ptr);
    return 0;
}
#endif

#if 0
int main()
{
    int x=10, y=20;
    int const*const int ptr=&x;
    ptr=&y;//error
    *ptr=500;//error
    return 0;
}
#endif

#if 0
int main()
{
    int *p1, *p2;
    #if 0
    p1+10;
    p2-10;
    p2-p1;
    #else
    p1+p2;
    p2/2;
    p1*2;
    p1*p2;
    p1/p2;
    #endif
    return 0;
}
#endif

#if 0
int main()
{
    int num=0;
    scanf("%d", num);//segmentation fault
}
#endif

#if 0
int main()
{
    int *num=0;
    printf("%d\n", *num);//segmentation fault
}
#endif

#if 0
//bus error
int main()
{
    char array[sizeof(int)+1];
    int *ptr1, *ptr2;
    ptr1=&array[0];
    ptr2=&array[1];
    scanf("%x %x",ptr1,ptr2);//what if i write \n//bus error
    printf("%x %x\n", *ptr1, *ptr2);
}
#endif

#if 0

#endif