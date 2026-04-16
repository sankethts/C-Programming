//WAP to print line pattern (eg: $$$***$$$)
/*
#include <stdio.h>
int main()
{
    int n, m, i, side;
    printf("Enter the value of n and m: ");
    scanf("%d %d", &n, &m);
    
    //Read total (n) number of pattern chars in a line (number should be “odd”)
    //Read number (m) of pattern char to be printed in the middle of line (“odd” number)
    
    side = (n - m) / 2;

    for (i = 1; i <= n; i++)
    {
        if (i > side && i <= side + m)
            printf("*");
        else
            printf("$");
    }
    printf("\n");

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int n, m, side;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter m : ");
    scanf("%d", &m);

    side = (n - m) / 2;

    for (int i = 1; i <= side; i++)
        printf("$");

    for (int i = 1; i <= m; i++)
        printf("*");

    for (int i = 1; i <= side; i++)
        printf("$");

    return 0;
}
*/
