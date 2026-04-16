//static storage class
#include<stdio.h>
#if 0
void display()
{
    static int x;//default value is 0
    int y=20;
    x+=13;
    y--;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
}
int main()
{
    static int x=10;
    display();
    display();
    printf("x=%d\n", x);
}
#endif

#if 0
void display()
{
    static int x=5;
    int y=5;
    x++;
    y++;
    printf("x=%d\t", x);
    printf("y=%d\n", y);
}
int main()
{
    for(int i=0; i<3; i++)
    {
        display();
    }
}
#endif
