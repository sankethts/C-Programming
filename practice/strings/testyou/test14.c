//String notes

//7)replace a character
#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter string: ");
    scanf("%[^\n]", str);
    for(int i=0; str[i]; i++)
    {
        if(str[i]=='a')
        {
            str[i]='*';
        }
    }
    printf("%s\n", str);
}

/*
//8)wap to count words in a sentence
#include<stdio.h>
int main()
{
    char str[30];
    int count=0;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    for(int i=0; str[i]; i++)
    {
        if((i==0 && str[i]!=' ') || (str[i]!=' ' && str[i-1]==' '))//or   if(str[i]==' ')
        {
            count++;
        }
    }
    printf("Number of words: %d\n", count);
    printf("%s\n", str);
}
*/
/*
//wap to convert string to an integer(without atoi)
#include<stdio.h>
int main()
{
    char str[30];
    int num=0;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    for(int i=0; str[i]; i++)
    {
        num=num*10+str[i]-'0';
    }
    printf("Integer value: %d\n", num);
}
*/
/*
//wap to remove a specific character
#include<stdio.h>
int main()
{
    char ch, str[30];
    int k=0;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    printf("Enter the character you want to remove: ");
    scanf(" %c", &ch);
    for(int i=0; str[i]; i++)
    {
        if(str[i]!=ch)
        {
            str[k++]=str[i];
        }
    }
    str[k]='\0';
    printf("After removing: %s\n", str);
}
*/
/*
//wap to convert integer to string(without sprintf or itoa)
#include<stdio.h>
int main()
{
    int num, rem=0, i=0, size;
    char str[100];
    printf("Enter number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        rem=num%10;
        str[i++]=rem+'0';
        num=num/10;
    }
    str[i]='\0';
    printf("After removing: %s\n", str);
    for(int j=0; j<i/2; j++)
    {
        char temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }
    printf("String is: %s\n", str);
}
*/

//examples on strings
/*
//2)wap to check if string starts with substring
#include<stdio.h>
int main()
{
    char str1[30], str2[20];
    int flag=0;
    printf("Enter string: ");
    scanf("%[^\n]", str1);
    getchar();
    printf("Enter substring: ");
    scanf("%[^\n]", str2);
    for(int j=0; str2[j]; j++)
    {
        if(str1[j]!=str2[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
*/
/*
//wap to find all positions of character
#include<stdio.h>
int main()
{
    char str[30], ch;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    printf("Enter character: ");
    scanf(" %c", &ch);
    printf("Positions of %c: ", ch);
    for(int i=0; str[i]; i++)
    {
        if(str[i]==ch)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
*/
/*
//wap to seperate string from delimiter
#include<stdio.h>
int main()
{
    char str[100], delimiter;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    printf("Enter delimiter: ");
    scanf(" %c", &delimiter);
    for(int i=0; str[i]; i++)
    {
        if(str[i]==delimiter)
        {
            printf("\n");
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}
*/
/*
//wap to reverse word individually
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%[^\n]", str);
    int start=0;
    for(int i=0; ; i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            int end=i-1;
            while(start<end)
            {
                char temp=str[start];
                str[start]=str[end];
                str[end]=temp;

                start++;
                end--;
            }
            start=i+1;
            if(str[i]=='\0')
            {
                break;
            }
        }
        
    }
    printf("Result: %s\n", str);
}
*/

/*
//wap to insert character at position
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], ch;
    int pos;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    printf("Enter character: ");
    scanf(" %c", &ch);
    printf("Enter position: ");
    scanf("%d", &pos);
    int size=strlen(str);
    for(int i=size-1; i>=pos-1; i--)
    {
        str[i+1]=str[i];
    }
    size++;
    str[pos-1]=ch;
    str[size+1]='\0';
    printf("%s\n", str);
}
*/


//wap to find common charcaters b/w two strings
#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int visited[100]={0};
    printf("Enter string1: ");
    scanf("%[^\n]", str1);
    printf("Enter string2: ");
    scanf(" %[^\n]", str2);
    for(int i=0; str1[i]; i++)
    {
        if(visited[str1[i]]==1)
          continue;
        for(int j=0; str2[j]; j++)
        {
            if(str1[i]==str2[j])
            {
                printf("%c ", str1[i]);
                visited[str1[i]]=1;
                break;
            }
        }
    }
    printf("\n");
}