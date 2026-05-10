#include<stdio.h>
#if 1
int main()
{
    unsigned char bit = 0;
    unsigned long int wait;
    while(1)
    {
        bit = !bit;
        printf("Bit: %d\r", bit);
        fflush(stdout);
        for(wait=0x1fffffff; wait--; );
    }
    return 0;
}
#endif

#if 0
int main()
{
    unsigned int num = 0;
    unsigned int getout;
    scanf("%d", &getout);
    while(getout)
    {
        num++;
    }
    return 0;
}
#endif

#if 0
int main()
{
    int num1;
    volatile int num2=1;
    num1=++num2 + num2++ + num2++ + num2++;
    printf("%d\n", num1);
    return 0;
}
#endif

#if 0
int main()
{
    int num1;
    volatile int num2=1;
    num1=++num2 + num2++ + num2++ + num2++;
    printf("%d\n", num1);
    return 0;
}
#endif