//wap to find the length of the string
/*
//using strlen()
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%[^\n]", str);
    printf("Length of the string is %lu\n", strlen(str));
}
*/

//without strlen()
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%[^\n]", str);
    int count=0;
    while(str[count])
    {
        count++;
    }
    printf("Length of the string is %d\n", count);
}