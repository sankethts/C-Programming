/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the value of ch:"); //a
    scanf("%c", &ch);
    printf("%c\n", ch); //a
}
    
#include<stdio.h>
int main()
{
    char ch='A';
    printf("Enter the value of ch: %c\n", ch); //A
}

#include<stdio.h>
int main()
{
    char ch='A';
    printf("Enter the value of ch: %c\n ASCII: %d\n", ch, ch); //A 65
}

#include<stdio.h>
int main()
{
    char ch=65;
    printf("Enter the value of ch: %c\n ASCII: %d\n", ch, ch); //A 65
}

#include<stdio.h>
int main()
{
    char ch=-128;
    printf("Enter the value of ch: %d\n", ch); //-128
}

#include<stdio.h>
int main()
{
    unsigned char ch=-128;
    printf("Enter the value of ch: %d\n", ch); //256-128=128
}

#include<stdio.h>
int main()
{
    char ch=128;
    printf("Enter the value of ch: %d\n", ch);
}

#include<stdio.h>
int main()
{
    unsigned char ch=500;
    printf("Enter the value of ch: %d\n", ch); //500-256=244
}

#include<stdio.h>
int main()
{
    char ch=25;
    printf("Enter the value of ch: %c\n", ch); 
}
   
#include<stdio.h>
int main()
{
    char ch=-1;
    printf("Enter the value of ch: %c\n", ch);
    printf("%d\n",ch); //signed//-1
    printf("%u\n",ch); //unsigned//big value
    printf("%hd\n",ch); //-1
    printf("%hhd\n",ch); //-1
    printf("%hhu\n",ch); //255
}
 
#include<stdio.h>
int main()
{
    char ch=-130;
    printf("Enter the value of ch: %c\n", ch);
    printf("%d\n",ch); //signed//-130
    printf("%u\n",ch); //unsigned//big value
    printf("%hd\n",ch); //-1
    printf("%hhd\n",ch); //-1
    printf("%hhu\n",ch); //255
}

#include<stdio.h>
int main()
{
    char ch=-129;
    
    printf("%d\n",ch); 
    printf("%u\n",ch); 
    printf("%hd\n",ch); 
    printf("%hhd\n",ch); 
    printf("%hhu\n",ch); 
}

#include<stdio.h>
int main()
{
    char ch=0xAB;
    
    printf("%X\n",ch); 
    printf("%hX\n",ch); 
    printf("%hhX\n",ch); 
}
  
#include<stdio.h>
int main()
{
    unsigned char ch= 258;
    
    printf("%d\n",ch); 
    printf("%u\n",ch);
    printf("%hd\n",ch);
    printf("%hhd\n",ch);
    printf("%hhu\n",ch);
}

#include<stdio.h>
int main()
{
    char ch=0xFF;
    
    printf("%X\n",ch); 
    printf("%hX\n",ch); 
    printf("%hhX\n",ch);
    printf("%hhd\n",ch);
    printf("%hhu\n",ch); 
}
  */
#include<stdio.h>
int main()
{
    char ch= -20;
    
    printf("%d\n",ch); 
    printf("%hd\n",ch);
    printf("%hhd\n",ch);
    printf("%u\n",ch);
    printf("%hu\n",ch);
    printf("%hhu\n",ch);
}
