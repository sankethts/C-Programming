//wap to reverse the string
//i/p: "world"  o/p: dlrow

#include<stdio.h>
#include<string.h>
void reverse(char str[])
{
    int size=strlen(str);
    for (int i=0; i<size/2; i++)
    {
        char temp=str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=temp;

    }
}
int main()
{
    char str[]="world";
    printf("Before reversing: %s\n", str);
    reverse(str);
    printf("After reversing: %s\n", str);
}


