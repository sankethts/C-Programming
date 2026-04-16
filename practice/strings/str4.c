//passing string to function

#include<stdio.h>
void output(char *str)//char str[]
{
    printf("%s\n", str);
}
int main()
{
    char str[]="hello";
    output(str);
}


