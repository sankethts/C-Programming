#include<stdio.h>
#include<unistd.h>

#if 0
int main()
{
    printf("Hello");
    return 0;
}
#endif

#if 0
int main()
{
    while (1)
    {
        printf("Hello");
        sleep(1);
    }
    return 0;
}
#endif

#if 0
int main()
{
    while (1)
    {
        printf("HelloHelloHelloHelloHello");
        sleep(1);
    }
    return 0;
}
#endif

#if 0
int main()
{
    while (1)
    {
        printf("Hello");
        fflush(stdout);//clear output buffer
        sleep(1);
    }
    return 0;
}
#endif

#if 0
int main()
{
    while (1)
    {
        printf("Hello\n");//\n is also used to clean the output buffer
        sleep(1);
    }
    return 0;
}
#endif

#if 0
int main()
{
    setbuf(stdout, NULL);//buffer will be disabled
    while (1)
    {
        printf("Hello");
        sleep(1);
    }
    return 0;
}
#endif

#if 0
int main()
{
    int num=0;
    while (1)
    {
        printf("enter the number: ");
        scanf("%d", &num);
    }
    return 0;
}
#endif


#if 0
int main()
{
    char str[BUFSIZ] = "1";
    setbuf(stdout, NULL);
    while (1)
    {
        printf("%s", str);
        sleep(1);
    }
    return 0;
}
#endif

#if 0
int main()
{
    char ch='y';
    printf("enter string: ");
    while (1)
    {
        scanf("%c", &ch);
        getchar();//skip alternate character
        printf("%c", ch);
    }
    return 0;
}
#endif

#if 0
int main()
{
    char ch='y';
    printf("enter string: ");
    while (1)
    {
        scanf("%c", &ch);
        while(getchar() != '\n');//skip all characters
        printf("%c", ch);
    }
    return 0;
}
#endif

#if 0
#include<stdio_ext.h>//supports fpurge()
int main()
{
    char ch='y';
    printf("enter string: ");
    while (1)
    {
        scanf("%c", &ch);
        //while(getchar() != '\n');//skip all characters
        __fpurge(stdin);
        printf("%c", ch);
    }
    return 0;
}
#endif

#if 0
int main()
{
    while (1)
    {
        fprintf(stdout, "hello");//print after 205 sec
        fprintf(stderr, "world");//print after every 1 sec
        sleep(1);
    }
    return 0;
}
#endif

#include <stdio.h>
int *foo()
{
int i = 10;
int *j = &i;
return j;
}
int main()
{
int *i;
i = foo();
printf("sanjay");
printf(“*i %d\n”, *i);
return 0;
}