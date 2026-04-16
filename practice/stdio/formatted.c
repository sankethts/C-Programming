#include<stdio.h>
#if 0
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", num);
}
#endif

#if 0
int main()
{
    char a[8]="emertxe";
    printf(a);
    return 0;
}
#endif

#if 1
int main()
{
    printf("%d %i\n", 10, 10);
    printf("%e %E\n", 1.2, 1.2);
    printf("%a %A\n", 123.4, 123.4);
    printf("%hx\n", 0xabcdffff);
    printf("%lx\n", 0xabcdeeee);
    printf("%llx\n", 0xffffffff);
    printf("%Lf\n", 1.23456789L);
}
#endif

#if 0
int main()
{
    printf("%3d %3d\n", 1, 1);
    printf("%3d %3d\n", 10, 10);
    printf("%3d %3d\n", 100, 100);
    printf("%3d %3d\n", 1000, 1000);
    printf("%10s\n", "hello");
    printf("%20s\n", "hello");
    printf("%*d\n", 1, 1);
    printf("%*d\n", 2, 1);
    printf("%*d\n", 3, 1);
}
#endif

#if 0
int main()
{
    printf("%3.1d\n", 1);
    printf("%3.2d\n", 1);
    printf("%3.3d\n", 1);
    printf("%0.3f\n", 1.0);
    printf("%0.10f\n", 1.0);
    printf("%12.8s\n", "hello world");
}
#endif

#if 0
int main()
{
    printf("%#x %#X %#x\n", 13, 14, 11);
    printf("%#o\n", 8);
    printf("%-3d %-3d\n", 1, 1);
    printf("%-3d %-3d\n", 10, 10);
    printf("%-3d %-3d\n", 100, 100);
    printf("%-3d\n", 100);
    printf("%-3d\n", -100);
    printf("%+05d\n", 123456);
    printf("%.2f %.5s\n", 12.345, "hello world");
}
#endif

#if 0
int main()
{
    printf("hello world\n");
    printf("hello\rworld\n");
    printf("hello_emertxe\rworld\n");
    printf("hello\tworld\n");
    printf("hello\bworld\n");
    printf("hello\vworld\n");
    printf("hello world\f");
    printf("hello\eworld\n");
    printf("A\\B\\C\n");
    printf("\"hello world\"");
}
#endif

#if 0
int main()
{
    printf("80%%\n");
    printf("80%c\n", '%');
}
#endif

#if 0
#include<unistd.h>
int main()
{
    int i;
    for(int i=0; i<=100; i++)
    {
        //printf("Loading [] %3d%%\n", i);
        //printf("Loading [] %3d%%\r", i);
        printf("\rLoading [] %3d%%", i);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}
#endif

#if 0
int main()
{
    //printf("%d\n", printf("Vikas\n"));
    printf("%d %d\n", printf("Vikas\n"), printf("Emertxe\n"));
}
#endif

#if 0
int main()
{
    int num1=123;
    char ch='A';
    float num2=12.345;
    char string1[]="sprintf() Test";
    char string2[100];
    sprintf(string2, "%d %c %f %s\n", num1, ch, num2, string1);
    printf("%s\n", string2);
}
#endif

#if 0
int main()
{
    int num=123;
    char string1[10];
    sprintf(string1, "%d\n", num);
    printf("Number is: %d\n", num);
    printf("String is: %s\n", string1);
}
#endif

#if 0
int main()
{
    int num1, ret;
    char ch;
    float num2;
    char str[10];
    ret = scanf("%d %c %f %s", &num1, &ch, &num2, str);
    printf("%d %c %f %s\n", num1, ch, num2, str);
    printf("scanf() returned: %d\n", ret);
}
#endif

#if 0
int main()
{
    int h, m, s;
    scanf("%d%*c%d%*c%d", &h, &m, &s);//%*c means discard that character
    printf("%d:%d:%d\n", h, m, s);
}
#endif

#if 0
int main()
{
    int n1, n2, n3, res=0;
    scanf("%d%*c%d%*c%d", &n1, &n2, &n3);
    res=n1+n2+n3;
    printf("%d:%d:%d\n", res);
}
#endif

#if 0
int main()
{
    char name[20];
    //char id[20];
    scanf("%[a-z A-Z]", name);//will take only characters
    printf("%s\n", name);
}
#endif

#if 0
int main()
{
    char id[20];
    scanf("%[0-9]", id);//will take only digits
    printf("%s\n", id);
}
#endif

#if 0
int main()
{
    int num=100, ret;
    printf("Enter number[now it si 100]: ");
    ret=scanf("%d", &num);
    
    if(ret!=1)
    {
        printf("Invalid input, number is %d\n", num);
    }
    else
    {
        printf("Number is modified: %d\n", num);
    }
    printf("scanf returned: %d\n", ret);
}
#endif

#if 0
int main()
{
    int age;
    char arr1[10], arr2[10];
    sscanf("I am 30 yrs old", "%s %s %d", arr1, arr2, &age);//read input from string
    //sscanf("Hi i am 30 yrs old", "%s %s %d", arr1, arr2, &age);
    printf("%s %s %d\n", arr1, arr2, age);
    printf("you are %d years old\n", age);
}
#endif

#if 0
int main()
{
    printf("%-5.5s %-10.4s %-10.8s %5.4s %8.6s\n", "S. No", "Name", "Quantity", "Cost", "Amount");
    printf("%-5.0d %-10.10s %7.0d %8.2f %8.2f\n", 1, "Kurkure", 4, 10.125, 1234.145);
    printf("%-5.0d %-10.10s %7.0d %8.2f %8.2f\n", 2, "India gate basmati", 4, 13.125, 134.145);
    return 0;
}
#endif