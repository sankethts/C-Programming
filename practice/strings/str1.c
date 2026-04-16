#include<stdio.h>
int main()
/*
{
    //char str[]="hello";
    //printf("%s\n", str);

    //char str1[6]="hello";
    //printf("%s\n", str1);

    //char str2[5]="hello";
    //printf("%s\n", str2);

    char str3[4]="hello";
    printf("%s\n", str3);
}
*/
/*
{
    char str[5];
    //scanf("%s", str);
    gets(str);
    printf("%s\n", str);
}
*/

/*
{
	//char str1[6]={'h','e','l','l','o','\0'};
	//printf("%s\n", str1);
	char str2[6]="hello";
    str2[0]='H';
    char *str="hello";
    str[0]='H';
    printf("%s\n", str2);
    printf("%s\n", str);
}
*/

{
    /*char str[6]="Hello";
    printf("%s\n",str);
    printf("%s\n",str+2);*/

    /*char str2[3];
    printf("Enter the str: ");
    scanf("%s",str2);
    printf("%s\n",str2);*/

    /*char str3[30];
    printf("Enter char with space: ");
    scanf(" %[^\n]s",str3);
    printf("%s\n",str3);*/

    /*char str9[30];
    printf("Enter char with comma: ");
    scanf(" %[^,]s",str9);
    printf("%s\n",str9);*/

    int size;
    printf("Enter the size of string : ");
    scanf("%d",&size);
    char str4[size];
    printf("Enter the string: ");
    scanf(" %[^\n]s",str4);
    printf("%s\n",str4);

    for(int i=0;str4[i]!='\0';i++)
    {
        printf("%c",str4[i]);
    }

}



