//length of string

#include<stdio.h>
#include<string.h>
int main()
/*
{
    char str[]="Hello";
    printf("%zu\n",sizeof(str));
    printf("Length of string: %u\n",strlen(str));

    int count=0;
    for(int i=0;i<str[i]!='\0';i++)
    {
        count ++;
    }
    printf("Length of string=%d\n",count);
}
*/

{
    char s1[30]="jenny ";
    char s2[8]="khatri";
    //strcat(s1,s2);
    strncat(s1,s2,2);
    printf("%s\n", s1);
    printf("%s\n", s2);
}