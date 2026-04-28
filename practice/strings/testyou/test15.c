//own strstr
#include<stdio.h>
int main()
{
    char str[]="hi, how are you";
    char ptr[]="aree";
    int flag=0, i, j;
    for(i=0; str[i]!='\0'; i++)
    {
        flag=0;
        for(j=0; ptr[j]!='\0'; j++)
        {
            if(ptr[j]!=str[i+j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%s\n", &str[i]);
            break;
        }
    }
}
