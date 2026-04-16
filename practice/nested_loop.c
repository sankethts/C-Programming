/*
Nested loop: Loop inside another loop
1. nested for loop
2. nested while loop

syntax:

for (initialization;condition;post_evaluation_exp)
{
  //statements
  for (initialization;condition;post_evaluation_exp)
  {
    //statements
  }
}
*/
/*
#include<stdio.h>
int main()
{
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=5; j++) //j=1,2,3,4,5
        {
            printf("%d\n", j);
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int rows, columns;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    for (int i=1; i<=rows; i++)
    {
        for (int j=1; j<=columns; j++) //j=1,2,3,4,5
        {
            printf("*");
        }
        printf("\n");
    }
}
*/

/*
4 3 2 1
3 2 1 0
2 1 0 -1
1 0 -1 -2
*/
/*
#include<stdio.h>
int main()
{
    int rows, columns, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    for (int i=rows; i>=1; i--)
    {
        c=i;
        for (int j=1; j<=columns; j++) 
        {
            
            printf("%d ", c);
            c--;
            
        }
        
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int rows, columns;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    for (int i=rows; i>=1; i--)
    {
        
        for (int j=i; j>(i-columns); j--) 
        {
            
            printf("%d ", j);
        
            
        }
        
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int rows, columns;
    char cd='A';
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    for (int i=rows; i>=1; i--)
    {
        char c=cd;
        for (int j=1; j<=columns; j++) 
        {
            
            printf("%c ", c);
            c++;
            
        }
    cd++;
        printf("\n");
    }
}
*/

/*
1111
1111
1111
1111
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        {
            printf("1 ");
        }
        printf("\n");

    }
}
*/

/*
1111
2222
3333
4444
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        {
            printf("%d ", i);
        }
        printf("\n");

    }
}
*/

/*
10 10 10 10
20 20 20 20
30 30 30 30
40 40 40 40
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        {
            printf("%d ", i*10);
        }
        printf("\n");

    }
}
*/

/*
1234
1234
1234
1234
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        {
            printf("%d ", j);
        }
        printf("\n");

    }
}
*/

/*
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/
/*
#include<stdio.h>
int main()
{
    int row, column, num=1;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");

    }
}
*/

/*
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
*/
/*
#include<stdio.h>
int main()
{
    int row, column, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=0; i<row; i++)
    {
        c=i;
        for (int j=1; j<=column; j++)
        {
            c=c+1;
            printf("%d ",c);
        }
        printf("\n");

    }
}
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=0; i<row; i++)
    {
        for (int j=1; j<=column; j++)
        {
            printf("%d ",i+j);
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        {
            printf("%d ",i-1+j);
        }
        printf("\n");
    }
}
*/

/*
4 3 2 1
3 2 1 0
2 1 0 -1
1 0 -1 -2
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=0; i<row; i++)
    {
        for (int j=column; j>=1; j--)
        {
            printf("%d ",j-i);
        }
        printf("\n");
    }
}
*/

/*
ABCDEFGHIJKLMNOPQRSTUVWXYZ // ROW=2, COLUMN=13
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    char ch='A';
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}
*/

/*
AAAA
BBBB
CCCC
DDDD
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    char ch='A';
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        {
            printf("%c ",ch);
            
        }
        ch++;
        printf("\n");
    }
}
*/

/*
ABCD
ABCD
ABCD
ABCD
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    char ch='A';
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=0; j<column; j++)
        {
            printf("%c ",ch+j);          
        }       
        printf("\n");
    }
}
*/

/*
ABC
BCD
CDE
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    char ch='A';
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=0; j<column; j++)
        {
            printf("%c ",ch+j);          
        }
        ch++;       
        printf("\n");
    }
}
*/

/*
*-*-
-*-*
*-*-
-*-*
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    char ch='*', ch1='-';
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if ((i+j)%2==0)
            {
                printf("* ");
            }
            else
            {
                printf("- ");
            }                 
        }
        printf("\n");
    }
}
*/
/*
*
**
***
****
*/
/*
#include<stdio.h>
int main()
{
    int row, column;
    char ch='*';
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%c ",ch);
                  
        }    
        printf("\n");
    }
}
*/

/*
*---
-*--
--*-
---*
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i+j==n+1)
            {
                printf("* ");
            }
            else
            {
                printf("- ");
            }
      
        }
        printf("\n");
    }
}
*/

/*
*---
-*--
--*-
---*
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i==j)
            {
                printf("* ");
            }
            else
            {
                printf("- ");
            }
      
        }
        printf("\n");
    }
}
*/

/*
2-4-
-4-6
4-6-
-6-8
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    char ch='*', ch1='-';
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if ((i+j)%2==0)
            {
                printf("%d ", i+j);
            }
            else
            {
                printf("- ");
            }                 
        }
        printf("\n");
    }
}
*/

/*
--*--
-***-
*****
*/
/*
#include<stdio.h>
int main()
{
    int n=3; //Give only odd numbers
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n*2-1; j++)
        {
            if (j>=n-i+1 && j<=n+i-1)
            {
                printf("*");
            } 
            else
            {
                printf(" ");
            }
                           
        }
        printf("\n");
    }
}
*/

/*
*
**
***
****
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
           printf("* "); 
                           
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (j<=i)
            {
                printf("*");
            } 
            else
            {
                printf("-");
            }                          
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n-i+1; j++)
        {
            printf("* ");                        
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i+j>=n+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }                       
        }
        printf("\n");
    }
}
*/

/*
A
AB
ABC
ABCD
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    char ch='A';
    for (int i=1; i<=n; i++)
    {
        ch ='A';
        for (int j=1; j<=i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
  
    }
}
*/

/*
ABBA
BCCB
CDDC
DEED
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    char ch='A', ch1='B';
    for (int i=0; i<n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (j==1 || j==4)
            {
                printf("%c ", ch);
            }
            else
            {
                printf("%c ", ch1);
            }
        }
        ch++;
        ch1++;
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    char ch='A';
    for (int i=0; i<n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (j==1 || j==4)
            {
                printf("%c ", ch);
                ch++;
            }
            else
            {
                printf("%c ", ch);
            }
            if(j==3)
                ch--;
        }
        printf("\n");
    }
}
*/

/*
D
CD
BCD
ABCD
*/

#include<stdio.h>
int main()
{
    int n=4;
    char ch='D';

    for (int i=0; i<n; i++)
    {
        
        for (int j=0; j<=i; j++)
        {
            printf("%c", ch+i);
            ch--;
            
        }
        
        printf("\n");
    }
}

/*
#include<stdio.h>
int main()
{
    int n=4;
    char ch='A';
    for (int i=0; i<n; i++)
    {
        ch='A'+i;
        for (int j=1; j<=n; j++)
        {
            if (j<=n/2)
            {
                printf("%c ", ch);
                ch++;
            }
            else
            {
                ch--;
                printf("%c ", ch);
                
            }
        }
        
        printf("\n");
    }
}
*/