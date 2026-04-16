//wap to check two strings are equal or not

#include<stdio.h>

void equality(char str[], char str1[])
{
    int flag=1;
    for (int i=0; str[i]!='\0' || str1[i]!='\0'; i++)
    {
        if (str[i]!=str1[i])
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
      printf("Two strings are equal\n");
    else
      printf("Two strings are not equal\n");
}
int main()
{
    char str[]="Hello";
    char str1[]="hello";
    equality(str, str1);
}