#include<stdio.h>
#include<stdlib.h>
#if 0
int main(int argc, char *argv[], char *envp[])
{
    return 0;
}
#endif

#if 0
//check the number of arguments
int main(int argc, char *argv[])
{
    printf("No. of arguments: %d\n", argc);
    printf("\nList of Args: \n");
    int i;
    for(i=0; i<argc; i++)
    {
        printf("%d. %s\n", i+1, argv[i]);
    }
    return 0;
}
#endif

#if 0
//check the number of arguments
int main(int argc, char *argv[])
{
    printf("No. of arguments: %d\n", argc);
    printf("\nList of Args: \n");
    int i;
    for(i=0; argv[i]; i++)
    {
        printf("%d. %s\n", i+1, argv[i]);
        //printf("%d. %u\n", i+1, &argv[i]);
    }
    return 0;
}
#endif

#if 0
//check the environmental variables
int main(int argc, char *argv[], char *envp[])
{
    printf("No. of arguments: %d\n", argc);
    printf("\nList of Envp: \n");
    int i;
    for(i=0; envp[i]; i++)
    {
        printf("%d. %s\n", i+1, envp[i]);
        //printf("%d. %u\n", i+1, &argv[i]);
    }
    return 0;
}
#endif

#if 0
//get envp in program, to check envp exists or not
int main(int argc, char *argv[], char *envp[])
{
    char *ptr;
    ptr=getenv("san2");
    if(ptr==NULL)
    {
        printf("not found\n");
    }
    else
    {
        printf("Found: %s\n", ptr);
    }
    return 0;
}
#endif

#if 0
//average of arguments
int main(int argc, char *argv[], char *envp[])
{
    printf("No. of arguments: %d\n", argc);
    int i, sum = 0;
    float avg;
    for(i=1; i<argc; i++)
    {
        //sum = sum + *argv[i]-'0';
        sum = sum + atoi(argv[i]);
    }
    printf("Sum: %d\n", sum);
    printf("Avg: %g\n", (float)sum/(argc-1));
    return 0;
}
#endif

#if 0
// set and get envp in program
int main(int argc, char *argv[], char *envp[])
{
    char *ptr;
    setenv("var1", "environment12345", 0);
    ptr=getenv("var1");
    if(ptr==NULL)
    {
        printf("not found\n");
    }
    else
    {
        printf("Found: %s\n", ptr);
    }
    unsetenv("var1");
    ptr=getenv("var1");
    if(ptr==NULL)
    {
        printf("not found\n");
    }
    else
    {
        printf("Found: %s\n", ptr);
    }
    return 0;
}
#endif

#if 0
// get envp in program after unsetenv
int main(int argc, char *argv[], char *envp[])
{
    char *ptr;
    //setenv("var1", "environment12346", 1);
    ptr=getenv("var1");
    if(ptr==NULL)
    {
        printf("not found\n");
    }
    else
    {
        printf("Found: %s\n", ptr);
    }
    unsetenv("var1");
    ptr=getenv("var1");
    if(ptr==NULL)
    {
        printf("not found\n");
    }
    else
    {
        printf("Found: %s\n", ptr);
    }
    return 0;
}
#endif

#if 0
//function pointers 24/02/2026
int add(int, int);
int sub(int, int);
int operation(int x, int y, int (*fp)(int, int));

int main()
{
    int res;
    res=operation(10, 20, add);
    printf("res: %d\n", res);
    res=operation(10, 20, sub);
    printf("res: %d\n", res);
    return 0;
}
int add(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int operation(int x, int y, int (*fp)(int, int))
{
    return fp(x, y);
}
#endif

#if 0
int add(int, int);
int sub(int, int);
int operation(int x, int y, int (*fp)(int, int));

int main()
{
    int res;
    int (*fptr)(int, int);
    fptr=add;
    res=operation(10, 20, fptr);
    printf("res: %d\n", res);
    fptr=sub;
    res=operation(10, 20, fptr);
    printf("res: %d\n", res);
    return 0;
}
int add(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int operation(int x, int y, int (*fp)(int, int))
{
    return fp(x, y);
}
#endif

#if 0
//array of function pointers
int add(int, int);
int sub(int, int);
int operation(int x, int y, int (*fp)(int, int));

int main()
{
    int res;
    int (*fptr[2])(int, int)={add, sub};
    printf("sizeof fptr: %zu\n", sizeof(fptr));
    res=operation(10, 20, fptr[0]);
    printf("res: %d\n", res);
    res=operation(10, 20, fptr[1]);
    printf("res: %d\n", res);
    return 0;
}
int add(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int operation(int x, int y, int (*fp)(int, int))
{
    return fp(x, y);
    //return (*fp)(x, y);
    //return *fp(x, y);//error(missed brackets)
}
#endif

#if 0
static int *ptr;
int test();
void my_exit(void);
int main()
{
    atexit(my_exit);
    ptr=malloc(100);
    test();
    printf("Hello in main\n");
    return 0;
}
void my_exit(void)
{
    printf("Exiting program\n");
    if(ptr)
     free(ptr);
}
int test()
{
    printf("in test\n");
    //exit(0);
}
#endif

#if 1
//it will call in the reverse order of their registerd way
void test1(void);
void test2(void);
void test3(void);
int main()
{
    atexit(test1);
    atexit(test2);
    atexit(test3);
    printf("In main\n");
    return 0;
}
void test1(void)
{
    printf("test1\n");
}
void test2(void)
{
    printf("test2\n");
}
void test3(void)
{
    printf("test3\n");
}
#endif