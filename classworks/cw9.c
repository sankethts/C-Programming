//W.A.P to multiply 2 nos without multiplication operator
/*
#include <stdio.h>
int main()
{
    int a, b, i, prod = 0;
    scanf("%d %d", &a, &b);
    for (i = 1; i <= b; i++)
    {
        prod += a;
    }
    printf("%d", prod);
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int a, b, result = 0;
    int i, sign = 1;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) 
    {
        a = -a;
        sign = -sign;
    }
    if (b < 0) 
    {
        b = -b;
        sign = -sign;
    }
    for (i = 1; i <= b; i++)
    {
        result = result + a;
    }
    if (sign == -1)
        result = -result;
    printf("Product = %d\n", result);
    
}
