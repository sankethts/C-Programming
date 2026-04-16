/*#include <stdio.h>
int main()
{
    char option;
    int age;
    float height;
    scanf("%c", &option);
    printf("The character is %c\n", option);
    scanf("%d", &age);
    printf("The integer is %d\n", age);
    scanf("%f", &height);
    printf("The float is %f\n", height);
    return 0;
}
    

#include <stdio.h>
int main()
{
    char option;
    int age;
    float height;
    printf("The character is %c\n", option);
    printf("The integer is %d\n", age);
    printf("The float is %f\n", height);
    return 0;
}

#include <stdio.h>
int main()
{
    char option;
    int age;
    float height;
    printf("The size of char is %zu\n", sizeof(char));
    printf("The size of int is %zu\n", sizeof(int));
    printf("The float is %zu\n", sizeof(float));
    return 0;
}

#include <stdio.h>
int main()
{
    short int count1;
    long int count2;
    short count3;
    printf("short is %zu bytes\n", sizeof(short int));
    printf("long int is %zu bytes\n", sizeof(long int));
    printf("short is %zu bytes\n", sizeof(short));
    return 0;
}
*/
#include <stdio.h>
int main()
{
    unsigned int count1;
    signed int count2;
    unsigned char count3;
    signed char count4;
    printf("count1 is %u bytes\n", sizeof(unsigned int));
    printf("count2 is %u bytes\n", sizeof(signed int));
    printf("count3 is %u bytes\n", sizeof(unsigned char));
    printf("count3 is %u bytes\n", sizeof(signed char));
    return 0;
}