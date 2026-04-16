//strcmp

#include<stdio.h>

int strcmp(const char str[], const char str1[])
{
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]!=str1[i])
        {
            if (str[i]>str1[i])
              return 1;//return str[i]-str1[i]
            else
              return -1;
        }
    }
    return 0;
}
int main()
{
    char str[]="Hello";
    char str1[]="hello";
    int res=strcmp(str, str1);
    if (res==0)
      printf("Both strings are equal\n");
    else if (res==1)//res>0
      printf("Str>str1\n");//result is positive
    else
      printf("str<str1\n");//result is negetive
}

