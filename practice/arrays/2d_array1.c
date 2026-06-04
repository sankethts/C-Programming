#include<stdio.h>
#include<stdlib.h>
#if 0
//Declare and initialize a 3×3 2D array and print all elements.
int main()
{
    int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
#endif

#if 0
//Read a matrix from the user and print it in row-column format.
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    printf("Enter %d elements for an array:\n", r*c);
    int arr[r][c];
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elements of array are:\n");
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
//Find the sum of all elements in a 2D array.
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    printf("Enter %d elements for an array:\n", r*c);
    int arr[r][c];
    int i, j, sum=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
    printf("Elements of array are:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of all elements of an array: %d\n", sum);
}
#endif

#if 0
//Find the largest and smallest element in a matrix
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    printf("Enter %d elements for an array:\n", r*c);
    int arr[r][c];
    int i, j;
    int max = arr[0][0] = 0, min = arr[0][0] = 0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
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
    printf("Elements of array are:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Largest: %d\nSmallest: %d\n", max, min);
}
#endif

#if 0
//Print the diagonal elements of a square matrix
int main()
{
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    printf("Enter %d elements for an array:\n", n*n);
    int arr[n][n];
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Main Diagonal Elements of array are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
    printf("Anti Diagonal Elements of array are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i][n-i-1]);
    }
    printf("\n");

}
#endif

#if 0
//Find row wise sum
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    printf("Enter %d elements for an array:\n", r*c);
    int arr[r][c];
    int i, j, sum=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elements of an array are:\n");
    for(i=0; i<r; i++)
    {
        sum=0;
        for(j=0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
        printf("Sum of %d row elements: %d\n", i+1, sum);   
    }
}
#endif

#if 0
//Find column wise sum
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    printf("Enter %d elements for an array:\n", r*c);
    int arr[r][c];
    int i, j, sum=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<c; i++)
    {
        sum=0;
        for(j=0; j<r; j++)
        {
            sum=sum+arr[j][i];
        }
        printf("Sum of %d column: %d\n", i+1, sum);
    }
}
#endif

#if 0
//Transpose a matrix in-place and out-of-place.
void transpose_out_of_place(int r, int c, int arr[][c]);//can be done for any row column matrix, requires extra array
void transpose_in_place(int r, int arr[][r]);//can be done only for square matrix, in that array itself, we transpose
void print(int r, int c, int arr[][c]);
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    printf("Enter %d elements for an array:\n", r*c);
    int arr[r][c];
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elements of array before transpose:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    transpose_out_of_place(r, c, arr);
    if(r==c)
    {
        transpose_in_place(r, arr);
    }
    else
    {
        printf("Transpose in place is possible for only square matrix\n");
    }
    return 0;
}
void transpose_in_place(int r, int arr[][r])
{
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=i+1; j<r; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("Transpose in place:\n");
    print(r, r, arr);
}
void transpose_out_of_place(int r, int c, int arr[][c])
{
    int trans[c][r];
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            trans[j][i]=arr[i][j];
        }
    }
    printf("Transpose out of place:\n");
    print(c, r, trans);
}
void print(int r, int c, int arr[][c])
{
    int i, j;
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
//Multiply two matrices and store the result.
int main() 
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) 
    {
        printf("Multiplication not possible! Columns of A must equal rows of B.\n");
        return 1;
    }

    int a[r1][c1], b[r2][c2], res[r1][c2];

    printf("Enter %d elements of matrix A:\n", r1*c1);
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter %d elements of matrix B:\n", r2*c2);
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    //Resultant array must be initialised to zero
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            res[i][j]=0;
        }
    }
    
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            for(int k=0; k<c1; k++)
            {
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication of two matrices:\n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
#endif

#if 0
//add and subtract two matrices
int main()
{
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], add[r][c], sub[r][c];

    printf("Enter %d elements of matrix A:\n", r*c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter %d elements of matrix B:\n", r*c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    //Resultant array must be initialised to zero
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            add[i][j]=0;
            sub[i][j]=0;
        }
    }
    printf("Addition of two matrices:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
    printf("Subtraction of two matrices:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
}
#endif

#if 0
//Check if a matrix is symmetric.
int main()
{
    int n;//checking symmetric works only for square matrix

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter %d elements of matrix:\n", n*n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
         break;
    }
    
    if(flag==0)
    {
        printf("Matrix is symmetric\n");
    }
    else
    {
        printf("Matrix is not symmetric\n");
    }
}
#endif

#if 0
//Search for an element in a matrix.
int main()
{
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter %d elements of matrix:\n", r*c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int ch;
    printf("Enter the element to search: ");
    scanf("%d", &ch);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j] == ch)
            {
                printf("Element found at a[%d][%d]\n", i, j);
                return 0;
            }
        }
    }
    
    printf("Element not found\n");
    return 0;
}
#endif

#if 0
//Search for an element in a sorted row-wise and column-wise matrix.
int main()
{
    int r, c;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter %d array elements in sorted order:\n", r*c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    //start from top right corner
    int i=0, j=c-1;

    while(i<r && j>=0)
    {
        if(arr[i][j]==key)
        {
            printf("Element found at position arr[%d][%d]\n", i, j);
            return 0;
        }
        else if(arr[i][j]>key)
        {
            j--;//eliminate current column
        }
        else
        {
            i++;//eliminate current row
        }
    }
    printf("Not found\n");
    return 0;

}
#endif

#if 0
//Rotate a matrix 90° clockwise without extra space.
//only square matrix
void print(int n, int arr[][n]);
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter %d array elements:\n", n*n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Original array:\n");
    print(n, arr);

    //transpose
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    // //reverse 90
    // for(int i=0; i<n; i++)
    // {
    //     int left =0, right=n-1;
    //     while(left<right)
    //     {
    //         int temp=arr[i][left];
    //         arr[i][left]=arr[i][right];
    //         arr[i][right]=temp;
    //         left++;
    //         right--;
    //     }
    // }

    //reverse 90 anticlockwise
    for(int i=0; i<n; i++)
    {
        int left =0, right=n-1;
        while(left<right)
        {
            int temp=arr[left][i];
            arr[left][i]=arr[right][i];
            arr[right][i]=temp;
            left++;
            right--;
        }
    }

    printf("Reversed array:\n");
    print(n, arr);
    return 0;
}
void print(int n, int arr[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
#endif

#if 1
//Dynamically allocate a 2D array using malloc/calloc and free it.
int main()
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int **arr = malloc(r * sizeof(int *));

    for(int i=0; i<r; i++)
    {
        arr[i] = malloc(c * sizeof(int));
    }

    printf("Enter array elements:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array elements are:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<r; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
#endif