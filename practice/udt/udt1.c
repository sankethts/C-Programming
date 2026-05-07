#include<stdio.h>
//structure padding
//04/05/2026
#pragma pack(0)
#if 0
struct student
{
    char ch1;
    int id;
    char ch2;
};
int main()
{
    printf("sizeof struct student: %zu\n", sizeof(struct student));
    return 0;
}
#endif

#if 0
struct student
{
    char ch1;
    char ch2;
    int id;
};
int main()
{
    printf("sizeof struct student: %zu\n", sizeof(struct student));
    return 0;
}
#endif

#if 0
struct student
{
    char ch1;
    double id;
    char ch2;
};
int main()
{
    printf("sizeof struct student: %zu\n", sizeof(struct student));
    return 0;
}
#endif

#if 0
struct student
{
    char ch1;
    char ch2;
    double id;
};
int main()
{
    printf("sizeof struct student: %zu\n", sizeof(struct student));
    return 0;
}
#endif

#if 0
struct R {
    char a;
    double b;
    char c;
    int d;
};
int main()
{
    printf("sizeof struct student: %zu\n", sizeof(struct R));
    return 0;
}
#endif

#if 0
//05/05/2026
//bit fields
struct nibble
{
    unsigned char lower : 4;
    unsigned char upper : 4;
};
int main()
{
    struct nibble nb;
    printf("Sizeof nb: %zu\n", sizeof(nb));
}
#endif

#if 0
struct nibble
{
    unsigned lower : 4;
    unsigned upper : 4;
};
int main()
{
    struct nibble nb;
    printf("Sizeof nb: %zu\n", sizeof(nb));
}
#endif

#if 0
struct nibble
{
    unsigned char lower : 6;//10-compiler error, because max size is based on sizeof datatype
    unsigned char upper : 7;
};
int main()
{
    struct nibble nb;
    printf("Sizeof nb: %zu\n", sizeof(nb));
}
#endif

#if 0
struct nibble
{
    char lower : 4;
    char upper : 4;
};
int main()
{
    struct nibble nb={0x02, 0x0a};
    //nb.upper=0x0a;
    //nb.lower=0x02;
    printf("nb.upper: %#o\n", nb.upper);//%d: -6
    printf("nb.upper: %#x\n", nb.lower);//%d: 2
}
#endif

#if 0
struct nibble
{
    char lower : 4;//10-compiler error, because max size is based on sizeof datatype
    char upper : 4;
};
int main()
{
    struct nibble nb={0x02, 0x0a};
    //nb.upper=0x0a;
    //nb.lower=0x02;
    printf("nb.upper: %#o\n", nb.upper);//%d: -6
    printf("nb.upper: %#x\n", nb.lower);//%d: 2
}
#endif

#if 0
//union
union nibble
{
    char option;
    int id;
    double height;
};
int main()
{
    union nibble temp;
    printf("%zu\n\n", sizeof(temp));

    temp.height=7.2;
    printf("Height: %lf\n\n", temp.height);

    temp.id=0x1234;
    printf("Id: %x\n", temp.id);
    printf("Height: %lf\n\n", temp.height);

    temp.option='1';
    printf("Option: %x %c\n", temp.option, temp.option);
    printf("Id: %x\n", temp.id);
    printf("Height: %lf\n", temp.height);

    return 0;
}
#endif

#if 0
//another way to check little or big endian
union Endian
{
    unsigned int value;
    unsigned char byte[4];
};
int main()
{
    union Endian e={0x12345678};
    e.byte[0] == 0x78 ? printf("Little\n") : printf("Big\n");
    return 0;
}
#endif

#if 0
//
int main()
{ 

}
#endif