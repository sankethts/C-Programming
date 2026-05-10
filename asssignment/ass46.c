//Read n & n person names of maxlen 20. Sort and print the names
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort_names(char (*name)[20], int n);
int my_strcmp(char *str1, char *str2);
char* my_strcpy(char *dest, char *src);
int main()
{
    int n;

    printf("Enter the size: ");
    scanf("%d", &n);

    /* Dynamic memory allocation */
    char (*name)[20] = malloc(n * sizeof(*name));

    if (name == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("\nEnter the %d names of length max 20 characters in each\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("[%d] -> ", i);
        scanf("%19s", name[i]);
    }

    /* Function call */
    sort_names(name, n);

    printf("\nThe sorted names are:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    free(name);

    return 0;
}

void sort_names(char (*name)[20], int n)
{
    char temp[20];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            /* Compare adjacent strings */
            if (my_strcmp(name[j], name[j + 1]) > 0)
            {
                /* Swap strings */
                my_strcpy(temp, name[j]);
                my_strcpy(name[j], name[j + 1]);
                my_strcpy(name[j + 1], temp);
            }
            
        }
    }
}
int my_strcmp(char *str1, char *str2)
{
    while(*str1 && *str2)
    {
        if(*str1 != *str2)
        {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
char* my_strcpy(char *dest, char *src)
{
    while(*src)
    {
        *dest = *src;
        *dest++;
        *src++;
    }
    *dest='\0';
}