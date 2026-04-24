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

#if 1
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