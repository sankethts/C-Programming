//Practice Complement Operator
#include<stdio.h>
int main()
{
    int n1=-5;
    int n2=25;
    int n3=-112;
    int n4=0XAB;
    int n5=-1;
    int n6=0;
    
    printf("%d %x\n", ~(-5), ~(-5));
    printf("%d %x\n", ~(25), ~(25));
    printf("%d %x\n", ~(-112), ~(-112));
    printf("%d %x\n", ~(0XAB), ~(0XAB));
    printf("%d %x\n", ~(-1), ~(-1));
    printf("%d %x\n", ~(0), ~(0));
}