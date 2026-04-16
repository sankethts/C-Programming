
/*
whenever we are using any variable that should be declared first(variable declaration is must) along with datatype
cle
int main()
{
    int n;
    int num=10;
    char ch='a';
    float f=2.3;
    double d=2.34567;
    scanf("%d", &n);
    printf("%d\n",n);
    printf("%d\n",num);
    printf("   %c\n",ch);
    printf("   The value of f is: %f\n", f);
    printf("   %d %c %f %lf\n", num,ch,f,d);
    printf("hello\n");
    printf("hi\n");

}
*/
/*
int main()
{
    int n,sum=0,fact=1;
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        
        for(int i=1;i<=(n%10);i++)
            fact*=i;
        sum+=fact;
        n/=10;
    }
    if(sum==temp)
    {
        printf("perfect");
        //printf("%d %d",sum,temp);
        }    else{
        printf("not perfect");
        //printf("%d %d",sum,temp);
    }
}
*/

//wap to print prime numbers from 1 to 100

//#include<stdio.h>
//int main()
/*
{
    int flag;
    for (int i=2; i<=100; i++)
    {
        //i is prime or not
        flag=0;
        for (int j=2; j<i; j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            printf("%d", i);
            printf("\n");
        }
        
    }
}
*/

//wap to print prime numbers b/w 1 to 100 and skip the 5th prime number
/*
#include<stdio.h>
int main()
{
    int flag, count=0;
    for (int i=2; i<=100; i++)
    {
        //i is prime or not
        flag=0;
        
        for (int j=2; j<i; j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            count++;
            if (count==5)
            {
                continue;
            }
            
            printf("%d\n", i);          
        }
        
    }
}
*/

//strong number
/*
#include<stdio.h>
int main()
{
    int num=155, digit;
    int fact=1;
    int temp=num;
    int sum=0;
    while(num>0)
    {
        fact=1;
        for (int i=num%10; i>0; i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;    
    }
    if(sum==temp)
    {
        printf("perfect\n");
    }
    else
    {
        printf("Not perfect\n");
    }
}
*/

//goto
/*
#include<stdio.h>
int main()
{
    printf("How are you\n");
    goto label;
    printf("hi\n");
    if (0)
    {
        label: printf("hello\n");
    }
}
*/

//ternary operator
/*
#include<stdio.h>
int main()
{
    int num,num1, num2;
    printf("num1 num2: ");
    scanf("%d %d", &num1, &num2);
    //(num>0)?printf("Positive\n"):printf("Negetive\n");

}
*/

/*
#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    (m>0)?printf("Positive\n"): (m<0)?printf("Negetive\n"):printf("zero\n");
}
*/

//wap to find largest no b/w 3 no
/*
#include<stdio.h>
int main()
{
    int m1,m2,m3;
    scanf("%d %d %d", &m1, &m2, &m3);
    (m1>m2 && m1>m3)?printf("%d\n", m1): (m2>m1 && m2>m3)?printf("%d\n", m2):printf("%d\n", m3);
}
*/

//wap to find absolute value of a number
/*
#include<stdio.h>
int main()
{
    int m1;
    scanf("%d", &m1);
    (m1<0)?printf("%d\n", -m1): printf("%d\n", m1);
}
*/

/*
{
    int n, m, side;
    //printf("Enter n : ");
    scanf("%d", &n);
    //printf("Enter m : ");
    scanf("%d", &m);
    
    side = (n-m)/2;
    
    for (int i=1; i<=n; i++)
    {
        if (i>side && i<=side+m)
        {
            printf("*");
        }
        else
        {
            printf("$");
        }
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    l1: for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    goto l1;
    goto l1;
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int a=127;
    //printf("Enter a: ");
    //scanf("%d", &a);
   
    printf("%d\n", a);
    printf("%c\n", a);
    printf("%o\n", a);
    printf("%x\n", a);
    printf("%b\n", a);

}
*/
/*
#include<stdio.h>
int main()
{
    int num = 0;

    while (num == 0);   // ← IMPORTANT

    if (num++)
    {
        break;
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
*/
/*
{
    char ch='65';//invalid as an char, treated as an integer constant
    printf("%d\n", ch);
    printf("%c\n", ch);
}
//What is the type of '65'?
//It is an integer constant (int), not a char, and its value is implementation-defined.
//We use shifting to: move each character into its own byte position so they don’t overlap


{
    char ch=-230;
    printf("%u\n", ch);
}
*/
/*
{
    int a=0, b=1, c=-1, d;
    d=--a*(5+b)/2-c++*b;
    printf("%d\n", d);
}
*/
#include<stdio.h>
int main()
{
  int arr[]={0,0,0,0,0},i;
  for(i=0;i<5;i++)
  {
    printf("%d\n", arr[i]);
  }
  
}