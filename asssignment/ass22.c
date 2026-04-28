//WAP to implement getword function
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%[^\n]", str);
    int count=0, i;
    for(i=0; str[i]!=' '; i++)
    {
        str[count]=str[i];
        count++;
    }
    str[count]='\0';
    printf("you entered %s and length is %d\n", str, count);
}