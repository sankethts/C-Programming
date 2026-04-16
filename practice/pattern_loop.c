/*
*****
*****
*****
*****
*****
*/
/*
#include<stdio.h>
int main()
{
    int n=5;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            printf("*");
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
*****
*/
/*
#include<stdio.h>
int main()
{
    int n=5;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
*/

/*
*****
****
***
**
*
*/
/*
#include<stdio.h>
int main()
{
    int n=5;

    for (int i=1; i<=n; i++)
    {
        for (int j=n; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
*/

/*
*
*
*
*
*
*/
/*
#include<stdio.h>
int main()
{
    for (int i=1; i<=5; i++)
    {
        printf("*\n");
    }
}
*/

/*
*****
*/
/*
#include<stdio.h>
int main()
{
    for (int i=1; i<=5; i++)
    {
        printf("*");
    }
    printf("\n");
}
*/

/*
1
12
123
1234
12345
*/
/*
#include<stdio.h>
int main()
{
    int n=5;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
*/

/*
1
22
333
4444
55555
*/
/*
#include<stdio.h>
int main()
{
    int n=5;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
*/

/*
12345
1234
123
12
1
*/
/*
#include<stdio.h>
int main()
{
    int n=5;
    for (int i=n; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d", j);
            
        }
        printf("\n");
    }
}
*/

/*
5
54
543
5432
54321
*/
/*
#include<stdio.h>
int main()
{
    int n=5;
    for (int i=5; i>=1; i--)
    {
        for (int j=5; j>=i; j--)
        {
            printf("%d", j);
            
        }
        printf("\n");
    }
}
*/

/*
1
2 3
4 5 6
7 8 9 10
*/
/*
#include<stdio.h>
int main()
{
    int n=4, num=1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d ", num);
            num++;
            
        }
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
    int n=4;
    char ch='A';
    for (int i=1; i<=n; i++)
    {
        ch='A';
        for (int j=1; j<=n; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}
*/

/*
ABCD
BCDE
CDEF
DEFG
*/
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
            printf("%c ", ch);
            ch++;
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
ABCDE
*/
/*
#include<stdio.h>
int main()
{
    int n=5;
    char ch='A';
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<i; j++)
        {
            printf("%c ", ch+j);
            
        }
        printf("\n");
    }
}
*/

/*
A
BB
CCC
DDDD
EEEEE
*/
/*
#include<stdio.h>
int main()
{
    int n=5;
    char ch='A';

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%c ", ch);
            
        }
        ch++;
        printf("\n");
    }
}
*/

/*
ABCDE
ABCD
ABC
AB
A
*/
/*
#include<stdio.h>
int main()
{
    int n=5;
    char ch='A';

    for (int i=5;i>=1; i--)
    {
        for (int j=0; j<i; j++)
        {
            printf("%c ", ch+j);           
        }
        
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int n=5;

    for (int i=5; i>=1; i--)
    {
        for (char ch='A'; ch<'A'+i; ch++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
}
*/

/*
A
BC
DEF
GHIJ
*/
/*
#include<stdio.h>
int main()
{
    int n=4;
    char ch='A';
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%c ", ch);
            ch++;
            
        }
        printf("\n");
    }
}
*/