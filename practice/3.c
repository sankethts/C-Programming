
#include<stdio.h>
/*
int main()
{
    char ch='A';
    double d;
    int num;
    printf("%zu\n", sizeof(num));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long int));
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof('A'));
    printf("%zu\n", sizeof(123));
    printf("%zu\n", sizeof(ch));
}
*/
/*
#include<stdio.h>
void prime(int limit)
{
    int count;
    for(int i=2; i<limit; i++)
    {
        count=0;
        for(int j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);
    if(limit>1)
    {
        prime(limit);
    }
    else
    {
        printf("Invalid\n");
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    float age;
    printf("Enter the age: ");
    scanf("%f", &age);
    float *ptr=&age;
    *ptr=*ptr+20;
    printf("Age after increasing by 20 is %g\n", age);
}
*/

#if 0
#include<stdio.h>
int main()
{
    char ch, ch1;
    int a;
    scanf("%d%c%c", &a, &ch, &ch1);
    printf("%d %c %c\n", a, ch, ch1);
}
#endif
#if 1
#include<stdio.h>
int main()
{
    int a;
    char name[20];

    scanf("%d", &a);
    getchar();   // removes leftover newline

    scanf("%[^\n]", name);

    printf("%d\n", a);
    printf("%s", name);
}
#endif

#if 1
int main()
{
    int a=1, b=2, c=4, x;
    x=printf("%d %d %d\n", a, b, c);
    printf("%d\n", x);
}
#endif