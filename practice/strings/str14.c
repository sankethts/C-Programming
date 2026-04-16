//wap to convert binary string to int
//i/p: "1111"  o/p: 15
//i/p: "101"   o/p: 5

#include<stdio.h>
void binary(char str[])
{
    int result=0;
    for (int i=0; str[i]!='\0'; i++)
    {
        result=result*2+(str[i]-'0');//str[i]-'0' converts '1' to 1 and '0' to 0
    }
    printf("%d\n", result);
}
int main()
{
    char str[]="0111";
    binary(str);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="11010";//decimal value: 26
    int num=0, power=1;
    int length=strlen(str)-1;
    for (int i=0; i<=length; i++)
    {
        num=num+((str[length-i]-48)*power);
        power*=2;
    }
    printf("Decimal value: %d\n", num);
}
*/