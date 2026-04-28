//Squeeze the character in s1 that matches any character in the string s2
#include<stdio.h>
int main()
{
    char str[20], ptr[20];
    printf("Enter string1: ");
    scanf(" %[^\n]", str);
    printf("Enter string2: ");
    scanf(" %[^\n]", ptr);
    int i, j, k=0, flag=0;
    for(i=0; str[i]; i++)
    {
        flag=0;
        for(j=0; ptr[j]; j++)
        {
            if(str[i]==ptr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            str[k++]=str[i];
        }
    }
    str[k]='\0';
    printf("%s\n", str);

}