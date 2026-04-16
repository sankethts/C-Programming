//

#include<stdio.h>
int main()
{
    char *str1="Hello";
    char *str2="Hello";//str1 and str2 is same, which points to same address
    char *str3="hello";
    printf("%p\t%p\t%p\n",str1,str2,str3);
    printf("%s\t%s\t%s\n", *str1, *str2, *str3);

}

       