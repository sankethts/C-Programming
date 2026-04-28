//WAP to replace each string of one or more blanks by a single blank
#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter string: ");
    scanf("%[^\n]", str);
    int i, j=0;
    for(i=0; str[i]; i++)
    {
        if((str[i]==' ' || str[i]=='\t') && (str[i+1]==' ' || str[i+1]=='\t'))
          continue;

        str[j++]=str[i];
    }
    str[j]='\0';
    printf("%s\n", str);
}