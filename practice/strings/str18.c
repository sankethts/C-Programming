//own strstr

#include<stdio.h>
char *my_strstr(char str[], char sub[])
{
    int i,j;
    for (i=0; str[i]!='\0'; i++)
    {
        if(sub[0]==str[i])//find the match of first character in the main string
        {
            for (j=1; sub[j]!='\0'; j++)//compare all the substring char with the mainstring
            {
                if(str[i+j]!=sub[j])//if any character is not matching
                {
                    i=i+j;
                    break;//break the loop
                }
            }
            if(sub[j]=='\0')//substring found
            {
                return &str[i];//str+i

            }
        }
    }
    return NULL;
}
int main()
{
    char str[]="hi, how are you";
    char sub[]="how";
    char *ptr=my_strstr(str, sub);
    if(ptr==NULL)
    {
        printf("Not present\n");
    }
    else
    {
        printf("%s\n", ptr);
    }
}