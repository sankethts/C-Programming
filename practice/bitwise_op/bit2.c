#include<stdio.h>
#if 0
//and gate(filter)
int main()
{
    unsigned char a=0b10110110;
    unsigned char b=0b11001101;
    unsigned char r=a&b;
    printf("%d\n", r);//132
}
#endif

#if 0
//or gate()
int main()
{
    unsigned char a=0b10110110;
    unsigned char b=0b11001101;
    unsigned char and=a&b;
    unsigned char or=a|b;
    unsigned char xor=a^b;
    unsigned char not=~a;
    printf("%d\n", and);//132
    printf("%d\n", or);//255
    printf("%d\n", xor);//123
    printf("%d\n", not);//73
}
#endif

#if 0
//left shift, right shift
int main()
{
    int x=-5;
    int y=x<<2;
    //int z=x>>3;
    printf("Left shift: %d\n", y);
    //printf("Right shift: %d\n", z);
}
#endif

#if 1
int main()
{
    char a=20;
    char b=a<<3;
    printf("%d\n", b);
}
#endif