//WAP to generate a n*n magic square
#include<stdio.h>
#include<stdlib.h>
void magicsq(int **p, int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<=0 || n%2==0)
    {
        printf("Error : Please enter only positive values");
        return -1;
    }
    int **p = calloc(n, sizeof(int *));
    if(p==NULL)
    {
        perror("Error: ");
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        p[i] = calloc(n, sizeof(int));
    }

    magicsq(p, n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++)
    {
        free(p[i]);
    }

    free(p);
    return 0;
}
void magicsq(int **p, int n)
{
    int r=0;
    int c=n/2;
    int num;
    int nr, cr;

    for(num=1; num<=n*n; num++)
    {
        p[r][c]=num;

        int nr=r-1;
        int nc=c+1;
        
        //wrap row
        if(nr<0)
        {
            nr=n-1;
        }

        //wrap column
        if(nc==n)
        {
            nc=0;
        }
        
        //check already filled or not
        if(p[nr][nc] != 0)
        {
            //move one step down
            r=r+1;

            if(r==n)
            {
                r=0;
            }
        }
        else
        {
            r=nr;
            c=nc;
        }
    }

}