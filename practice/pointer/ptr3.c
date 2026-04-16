//wap to check which endian
/*
#include<stdio.h>
int main()
{
    int num=0x12345678;
    char *cptr=&num;
    printf("%hhx\n", *cptr);
    if (*cptr==0x78)
    {
        printf("Little endian\n");
    }
    else
    {
        printf("Big endian\n");
    }
}
*/

#include<stdio.h>
int main()
{
    int num=0x12345680;
    unsigned char *cptr=&num;
    int *ptr=&num;
    printf("%x\n", *ptr);
    printf("%x\n", *cptr);
    if (*cptr==0x80)
    {
        printf("Little endian\n");
    }
    else
    {
        printf("Big endian\n");
    }
}
