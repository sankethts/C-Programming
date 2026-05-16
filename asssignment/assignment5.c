//WAP to generate AP, GP, HP series
#include<stdio.h>
int main()
{
    int a, r, n;
    printf("Enter first number 'a': ");
    scanf("%d", &a);
    printf("Enter common diff/ratio 'r': ");
    scanf("%d", &r);
    printf("Enter number of elements 'n': ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Invalid input\n");
        return 0;
    }
    int temp=a;

    //AP
    printf("AP: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", temp);
        temp=temp+r;
    }

    //GP
    temp=a;
    printf("\nGP: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", temp);
        temp=temp*r;
    }

    //HP
    temp=a;
    printf("\nHP: ");
    for(int i=0; i<n; i++)
    {
        printf("%f ", 1.0/temp);
        temp=temp+r;
    }
    printf("\n");
    return 0;
}