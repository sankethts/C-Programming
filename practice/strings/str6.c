//wap to convert uppercase to lower and lower to upper
//i/p: "Hello"  o/p: hELLO

#include<stdio.h>
void output(char str[])
{
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if (str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s\n", str);
}
int main()
{
    char str[]="Hello";
    output(str);
    
}


