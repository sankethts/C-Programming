//strstr

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="good morning, how are you?";
    char search[]="aree";
    char *ptr=strstr(str,search);
    if(ptr!=NULL)
    {
        printf("%s\n", ptr);
    }
    else
    {
        printf("not present\n");
    }
}