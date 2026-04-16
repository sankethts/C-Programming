#include<stdio.h>
#if 0
int main()
{
    unsigned char a=0x67;
    char b=0x39;
    printf("%x\n", a&b);
    printf("%x\n", a|b);
    printf("%x\n", a^b);
    printf("%hhx\n", ~a);
    //printf("%c\n", a);
}
#endif

#if 0
int main()
{
    printf("14<<2:%d\n", 14<<2);//56
    printf("56>>2:%d\n", 56>>2);//14
    printf("-56>>2:%d\n", -56>>2);//-14
    printf("39>>2:%d\n", 39>>2);//9
    printf("-39>>2:%d\n", -39>>2);//-10
    printf("-1>>1:%d\n", -1>>1);//-1
    printf("255>>1:%d\n", 255>>1);//127
}
#endif

#if 0
int main()
{
    int count;
    //unsigned char iter=0xff;
    //char iter=0xff;
    //unsigned char iter=0xaa;
    //unsigned char iter=0xcd;

    for(count=0; iter!=0; iter>>=1)
    {
        if(iter & 01)
        {
            count++;
        }
    }
    printf("Count: %d\n", count);
}
#endif

#if 0
int main()
{
    int x=7, y=7;

    //x=7<<-1;
    x=7<<32;
    printf("x is %x\n", x);

    x=y<<-20;
    //x=7<<-30;
    printf("x is %x\n", x);

    return 0;
}
#endif

#if 0
int main()
{
    int x=7, y=7;

    //x=7<<-1;
    x=7<<32;
    printf("x is %x\n", x);

    x=y<<-20;
    //x=7<<-30;
    printf("x is %x\n", x);

    return 0;
}
#endif


#if 0
int main()
{
    int num, pos;
    //printf("Enter the number for signed variable: ");
    scanf("%d", &num);
    if(num<0)
    {
        unsigned int num=num;
    }
    //printf("Enter the number of shifts to be performed: ");
    //scanf("%d", &pos);
    //printf("After performing signed right shift: %d\n", num>>pos);
    printf("Signed >> 1 = %d\n", num >> 1);
    printf("Signed >> 2 = %d\n", num >> 2);
    printf("Unsigned >> 1 = %u\n", num >> 1);
    printf("Unsigned >> 2 = %u\n", num >> 2);
    //unsigned int num1;
    //printf("Enter the number for unsigned number: ");
    //scanf("%u", &num1);
    //printf("Enter the number of shifts to be performed: ");
    //scanf("%d", &pos);
    //printf("After performing unsigned right shift: %d\n", num1>>pos);
}
#endif

#if 0
//print the bits of the number
int main()
{
    int num, i;
    printf("Enter number: ");
    scanf("%d", &num);
    for(i=31; i>=0; i--)
    {
        if(num&(1<<i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}
#endif

#if 0
//print the bits of the number
int main()
{
    int num, i;
    printf("Enter number: ");
    scanf("%d", &num);
    for(i=31; i>=0; i--)
    {
        printf("%d", (num>>i)&1);
    }
    printf("\n");
    return 0;
}
#endif

#if 1
//count the set bit
int main()
{
    int num, i, count=0;
    printf("Enter number: ");
    scanf("%d", &num);
    for(i=31; i>=0; i--)
    {
        if(num&(1<<i))
        {
            printf("1");
            count++;
        }
        else
        {
            printf("0");
        }
    }
    printf("\nCount: %d", count);
    printf("\n");
    return 0;
}
#endif