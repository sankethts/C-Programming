//strtok()
#include<stdio.h>
int main()
{
    char str[20], del[10];
    int flag=0, inword=0;
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter delimiter: ");
    scanf("%s", del);
    for(int i=0; str[i]; i++)
    {
        flag=0;
        for(int j=0; del[j]; j++)
        {
            if(str[i]==del[j])
            {
                flag=1;
                break;
            }
        }  
        if(flag==0)
        {
            printf("%c", str[i]);
            inword=1; 
        }
        else
        {
            if(inword)
            {
                printf("\n");
                inword=0;
            }
        }
    }
}