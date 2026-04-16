#include<stdio.h>
#include<ctype.h>
#if 1
int main()
{
    int ch;
    for( ; (ch=getchar()) != EOF; )
    {
        putchar(toupper(ch));
    }
    puts("EOF Received\n");
    return 0;
}
#endif
#if 0
int main()
{
    int ch;
    for( ; (ch=getc(stdin)) != EOF; )
    {
        putc(toupper(ch), stdout);
    }
    puts("EOF Received\n");
    return 0;
}
#endif
#if 0
int main()
{
    char str[10];
    puts("Enter string: ");
    gets(str);//if entered more than size specified, it gives stack smashing
    puts(str);
    return 0;
}
#endif
#if 0
int main()
{
    char str[10];
    puts("Enter string: ");
    fgets(str, 10, stdin);
    puts(str);
    return 0;
}
#endif

#if 0
#include<unistd.h>
int main()
{
    while(1)
    {
        putc('A', stdout);
        //putc('A', stderr);
        sleep(1);
    }
    return 0;
}
#endif

#if 0
int main()
{
    int ch;
    for( ; (ch=getchar()) != '\n'; )
    {
        putchar(toupper(ch));
    }
    puts("\n");
    return 0;
}
#endif

#if 0
//abcd    efgh    ijkl
//abcd efgh ijkl
int main()
{
    int ch, space_flag=0;
    for( ; (ch=getchar()) != '\n'; )
    {
        if(ch==' ')
        {
            if(space_flag==0)
            {
                putchar(' ');
                space_flag=1;
            }
        }
        else
        {
            putchar(ch);
            space_flag=0;
        }
    }
    return 0;
}
#endif

#if 0
int main()
{
    char ch;
    int flag=1;
    for( ; (ch=getchar()) != '\n'; )
    {
        if((ch==' ' || ch=='\t')&& flag)
        {
            putchar(' ');
            flag=0;
        }
        if(ch!=' ' && ch!='\t')
        {
            putchar(ch);
            flag=1;
        }
    }
    puts("\n");
}
#endif

#if 0
#include<unistd.h>
int main()
{
    char str[100]={           HELLO WORLD};
    char ch;
    while(1)
    {


    }

}
#endif


#if 0
//count of characters
//abcd    efgh    ijkl
//abcd efgh ijkl
int main()
{
    int ch, space_flag=0, count=0;
    for( ; (ch=getchar()) != '\n'; )
    {
        if(ch==' ')
        {
            if(space_flag==0)
            {
                putchar(' ');
                space_flag=1;
            }
        }
        else
        {
            putchar(ch);
            count++;
            space_flag=0;
        }
    }
    printf("\nCount of characters: %d\n", count);
    return 0;
}
#endif


#if 0
//count of words
//abcd    efgh    ijkl
//abcd efgh ijkl
int main()
{
    int ch, space_flag=0, count=1;
    for( ; (ch=getchar()) != '\n'; )
    {
        if(ch==' ')
        {
            if(space_flag==0)
            {
                putchar(' ');
                space_flag=1;
                count++;
            }
        }
        else
        {
            putchar(ch);
            space_flag=0;
        }
    }
    printf("\nCount of words: %d\n", count);
    return 0;
}
#endif

#if 0
#endif