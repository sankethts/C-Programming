#include<stdio.h>
#include<stdarg.h>
#if 0
int sum(int count, ...);
int main()
{
    printf("%d\n", sum(5, 10,20,30,40,50));
    printf("%d\n", sum(5, 1,2,3,4,5));
    printf("%d\n", sum(2, 100,200));
    return 0;
}
int sum(int count, ...)
{
    va_list ap;
    va_start(ap, count);

    int total=0;
    for(int i=0; i<count; i++)
    {
        total=total+va_arg(ap, int);
    }
    va_end(ap);
    return total;
}
#endif

#if 1
// Mixed types
void my_print(const char *fmt, ...) 
{
    va_list ap;
    va_start(ap, fmt);

    while (*fmt != '\0') 
    {
        if (*fmt == 'd') 
        {
            int i = va_arg(ap, int);
            printf("int: %d\n", i);
        } 
        else if (*fmt == 'f') 
        {
            double d = va_arg(ap, double);  // float promotes to double!
            printf("float: %.2f\n", d);
        } 
        else if (*fmt == 's') 
        {
            char *s = va_arg(ap, char *);
            printf("string: %s\n", s);
        }
        fmt++;
    }

    va_end(ap);
}

int main() 
{
    my_print("dfs", 42, 3.14, "hello");
    return 0;
}
#endif