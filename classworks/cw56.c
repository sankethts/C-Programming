//Implement strdup(): Create a duplicate copy of a string in heap memory and return a pointer to it.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *my_strdup(char *str)
{
    if(str==NULL)
    {
        return NULL;
    }
    int len;
    len=strlen(str);
    char *cptr;
    cptr=malloc((len+1)*sizeof(char));
    if(cptr==NULL)
    {
        return NULL;
    }
    int i;
    for(i=0; str[i]; i++)
    {
        cptr[i]=str[i];
    }
    cptr[i]='\0';
    //strcpy(cptr, str);
    return cptr;
}
int main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%19[^\n]", str);
    char *cptr=my_strdup(str);
    if(cptr==NULL)
    {
        printf("Memory allocation is failed or invalid input\n");
        return -1;
    }
    printf("Duplicate copy of string: %s\n", cptr);
    free(cptr);
    return 0;
}