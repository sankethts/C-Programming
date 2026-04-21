//wap to find duplicate characters in string
#if 0
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%[^\n]", str);
    for(int i=0; str[i]; i++)
    {
        for(int j=i+1; str[j]; j++)
        {
            if(str[i]==str[j])
            {
                printf("%c", str[i]);
                break;
            }
        }
    }
    printf("\n");
}
#endif


#if 1
//wap to remove duplicate characters in string
#include<stdio.h>
int main()
{
    char str[100];
    int k=0, flag=0;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    for(int i=0; str[i]; i++)
    {
        flag=0;
        for(int j=0; j<i; j++)
        {
            if(str[i]==str[j])
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
    printf("%s", str);
    printf("\n");
}
#endif