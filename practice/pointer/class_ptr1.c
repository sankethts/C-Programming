#include<stdio.h>
#if 0
int main()
{
    int num=10;
    int *ptr1=&num;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;

    printf("%p\n", ptr3);
    printf("%p\n", *ptr3);
    printf("%p\n", **ptr3);
    printf("%d\n", ***ptr3);
}
#endif

#if 0
int main()
{
    int arr[2][3]={10, 20, 30, 40, 50, 60};
    int i, j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", arr[i][j]);
            printf("%d ", *(arr[i]+j));
            printf("%d ", *(*(arr+i)+j));
            printf("%d\n", (*(arr+i))[j]);
        }
    }
}
#endif

#if 0
int main()
{
    int arr[2][3]={10, 20, 30, 40, 50, 60};
    printf("sizeof arr: %zu\n", sizeof(arr));//24(sizeof entire array)
    printf("sizeof arr: %zu\n", sizeof(arr[0]));//12(sizeof 1st 1d array)
    printf("sizeof arr: %zu\n", sizeof(arr[0][0]));//4(sizeof element)
    printf("sizeof arr: %zu\n", sizeof(*arr));//12(dereferncing 1st level pointer gives size of 1d array)
    printf("sizeof arr: %zu\n", sizeof(**arr));//4(dereferencing 2nd level pointer gives the value size)
}
#endif

#if 0
int main()
{
    int m, n;
    printf("Enter the row and col: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the %d array elements:\n", m*n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array elements are:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int max=arr[0][0], min=arr[0][0];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}
#endif

//sort each 1d array elements
//sort all elements

#if 0
int main()
{
    int a=10;
    int b=20;
    int c=30;
    int *ptr[3];
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c; 
    
    int i, j;
    for(i=0; i<3; i++)
    {
        printf("%d ", *(ptr[i]));//all are same
        printf("%d ", **(ptr+i));
        printf("%d\n", ptr[i][0]);
    }
    printf("\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<1; j++)
        {
            printf("%d ", ptr[i][j]);//same using two loop
        }
    }
    printf("\n");
}
#endif

#if 0
//Sum of elements of 1d arrays in 2d array
int main()
{
    int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int sum;
    for(int i=0; i<3; i++)
    {
        sum=0;
        for(int j=0; j<3; j++)
        {
            sum=sum+arr[i][j];
        }
        printf("Sum: %d\n", sum);
    }
}
#endif

#if 0
//sort each 1d array elements of 2d array
int main()
{
    int m, n, i, j, temp, k;
    printf("Enter the row and col: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the %d array elements:\n", m*n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array elements are:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n-1; j++)
        {
            for(k=0; k<n-1; k++)
            {
                if (arr[i][k] > arr[i][k+1])
                {
                    temp=arr[i][k];
                    arr[i][k]=arr[i][k+1];
                    arr[i][k+1]=temp;
                }
            }
        }
    }
    printf("After sorting each elements in 1d array of 2d array:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
#endif

#if 0
//sort all elements in 2d array
int main()
{
    int m, n, i, j, temp, k;
    printf("Enter the row and col: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the %d array elements:\n", m*n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array elements are:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            //for(k=0; k<m+n-1; k++)
            //{
                if (arr[i][j] > arr[i][j+1])
                {
                    temp=arr[i][j];
                    arr[i][j]=arr[i][j+1];
                    arr[i][j+1]=temp;
                }
            //}
        }
    }
    printf("After sorting all elements of 2d array:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
#endif

#if 0
//17/04/26
void print_elements(int *ptr[])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            //printf("%d ", ptr[i][j]);
            //printf("%d ", *(*(ptr+i)+j));
            //printf("%d ", *(ptr[i]+j));
            //printf("%d ", (*(ptr+i))+j);
        }
        printf("\n");
    }
}
int main()
{
    int a[2]={10, 20};
    int b[2]={30, 40};
    int c[2]={50, 60};

    int *ptr[3];//={a,b,c};
    ptr[0]=a;
    ptr[1]=b;
    ptr[2]=c;
    //ptr={a,b,c};
    print_elements(ptr);
}
#endif

#if 0
int main()
{
    char s[3][8]={"Array", "of", "strings"};
    printf("%s %s %s\n", s[0], s[1], s[2]);

    for(int i=0; i<3; i++)
    {
        printf("%s ", s[i]);
    }
    printf("\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; s[i][j]!='\0'; j++)
        {
            printf("%c ", s[i][j]);
        }
        printf(" ");
    }
    printf("\n");
}
#endif

#if 0
int main()
{
    char *s[3]={"Array", "of", "strings"};
    printf("%s %s %s\n", s[0], s[1], s[2]);

    for(int i=0; i<3; i++)
    {
        printf("%s ", s[i]);
    }
    printf("\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; s[i][j]!='\0'; j++)
        {
            printf("%c ", s[i][j]);
        }
        printf(" ");
    }
    printf("\n");
}
#endif

#if 0
void read(char s[][8])
{
    for(int i=0; i<5; i++)
    {
        scanf("%s", s[i]);
    }
}
void print(char s[][8])
{
    for(int i=0; i<5; i++)
    {
        printf("%d. %s\n", i+1, s[i]);
    }
    printf("\n");
}
int main()
{
    char s[5][8];
    read(s);
    print(s);
}
#endif


#if 0
void read(int m, int n, char s[m][n])
{
    for(int i=0; i<m; i++)
    {
        scanf("%s", s[i]);
    }
}
void print(int m, int n, char s[m][n])
{
    for(int i=0; i<m; i++)
    {
        printf("%d. %s\n", i+1, s[i]);
    }
    printf("\n");
}
int main()
{
    int m, n;
    printf("Enter row and col: ");
    scanf("%d %d", &m, &n);
    char s[m][n];
    read(m, n, s);
    print(m, n, s);
}
#endif


#if 1
void print(char **str)
{
    for(int i=0; i<5; i++)
    {
        printf("%d. %s\n", i+1, str[i]);
    }
    
    int choice;
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice<1 || choice>5)
    {
        printf("Invalid option\n");
    }
    else
    {
        printf("You selected %s option\n", str[choice-1]);
    }
}
int main()
{
    char str[5][8]={"file", "edit", "view", "insert", "help"};
    print(str);
}
#endif