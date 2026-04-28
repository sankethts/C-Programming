#include<stdio.h>
#include<string.h>

#if 0
//Read and Print 2D Array
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elements of 2d array are:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
#endif

#if 0
//Find sum of all elements
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j, sum=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);
}
#endif


#if 0
//Find row-wise sum
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j, sum=0;
    for(i=0; i<r; i++)
    {
        sum=0;
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("%d row sum: %d\n", i, sum);
    }
}
#endif

#if 0
//Find column-wise sum
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j, sum=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(j=0; j<c; j++)
    {
        sum=0;
        for(i=0; i<r; i++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d column sum: %d\n", j, sum);
    }
}
#endif

#if 0
//Find largest element in matrix
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int largest=arr[0][0];
    for(j=0; j<c; j++)
    {
        for(i=0; i<r; i++)
        {
            if(arr[i][j]>largest)
            {
                largest=arr[i][j];
            }
        }
    }
    printf("Largest element in an array: %d\n",largest);
}
#endif

#if 0
//Find smallest element
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int smallest=arr[0][0];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(arr[i][j]<smallest)
            {
                smallest=arr[i][j];
            }
        }
    }
    printf("Smallest element in an array: %d\n", smallest);
}
#endif

#if 0
//Print main diagonal elements
//main diagonal = (i==j)
//take only square matrix
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Diagonal elements are:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i==j)
            {
                printf("%d ", arr[i][j]);
            }   
        }
    }
    // for(i=0; i<r && i<c; i++)
    // {
    //     printf("%d ", arr[i][i]);
    // }
    printf("\n");
}
#endif

#if 0
//Print secondary diagonal elements
//secondary diagonal, square matrix = (i+j==n-1), n means r or c if r and c are equal
//rectangular matrix, (i+j=c-1)
//take only square matrix
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Diagonal elements are:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i+j==c-1)
            {
                printf("%d ", arr[i][j]);
            }   
        }
    }
    printf("\n");
}
#endif

#if 0
//Sum of secondary diagonal
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j, sum=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i+j==c-1)
            {
                sum=sum+arr[i][j];
            }   
        }
    }
    printf("Sum of secondary diagonal: %d\n", sum);
}
#endif

#if 0
//Sum of main diagonal
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j, sum=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }   
        }
    }
    // for(i=0; i<r && i<c; i++)
    // {
    //     printf("%d ", arr[i][i]);
    // }
    printf("Sum of main diagonal elements: %d\n", sum);
}
#endif

#if 0
//Count even and odd numbers
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j, even=0, odd=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(arr[i][j]%2==0)
            {
                even++;
            }   
            else
            {
                odd++;
            }
        }
    }
    printf("Even: %d\nOdd: %d\n", even, odd);
}
#endif

#if 0
//Search an element in matrix
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int ch, found=0;
    printf("Enter the element to search: ");
    scanf("%d", &ch);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(arr[i][j]==ch)
            {
                printf("Element found\n");
                found=1;
                break;
            }
        }
    }
    if(found==0)
     printf("Not found\n");
}
#endif


#if 0
// Transpose of matrix
// If square matrix → can do in-place swap
// If rectangular → need new matrix
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d elements:\n", r*c);
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Transpose of matrix:\n");
    // for(j=0; j<c; j++)
    // {
    //     for(i=0; i<r; i++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    int trans[c][r];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            trans[j][i]=arr[i][j];
        }
    }

    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}
#endif

#if 0
// Multiplication of 2 matrices
int main()
{
    int r1, c1, r2, c2;
    printf("Enter row and column: ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    if(c1 != r2)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    int arr1[r1][c1], arr2[r2][c2];
    printf("Enter %d elements for matrix1:\n", r1*c1);
    int i, j, k;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter %d elements for matrix2:\n", r2*c2);
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int c[r2][c1];
    printf("Result of matrix multiplication:\n");
    for(i=0; i<r1; i++)//rows of matrix1
    {
        for(j=0; j<c2; j++)//columns of matrix2
        {
            c[i][j]=0;
            for(k=0; k<c1; k++)
            {
                c[i][j] = c[i][j] + arr1[i][k] * arr2[k][j];

            }
        }
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
#endif


#if 1
// Multiplication of 2 matrices
int main()
{
    int r1, c1, r2, c2;
    printf("Enter row and column: ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    if(c1 != r2)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    int arr1[r1][c1], arr2[r2][c2];
    printf("Enter %d elements for matrix1:\n", r1*c1);
    int i, j, k;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter %d elements for matrix2:\n", r2*c2);
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int c[r2][c1];
    printf("Result of matrix multiplication:\n");
    for(i=0; i<r1; i++)//rows of matrix1
    {
        for(j=0; j<c2; j++)//columns of matrix2
        {
            c[i][j]=0;
            for(k=0; k<c1; k++)
            {
                c[i][j] = c[i][j] + arr1[i][k] * arr2[k][j];

            }
        }
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
#endif
