#include<stdio.h>
#include<stdlib.h>
int int_flag=0, char_flag1=0, char_flag2=0, short_flag=0, float_flag=0, double_flag=0;
void add_element(void *ptr);
void display_element(void *ptr);
void remove_element(void *ptr);
int main()
{
    int choice;
    void *ptr = malloc(8);
    do
    {
        printf("Menu :\n");
        printf("1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 1)
        {
            add_element(ptr);
        }
        else if(choice == 2)
        {
            remove_element(ptr);
        }
        else if(choice == 3)
        {
            display_element(ptr);
        }
        else if(choice == 4)
        {
            printf("Exiting...\n");
        }
    }while(choice != 4);
    return 0;
}
void add_element(void *ptr)
{
    int choice;
    printf("Enter the type you have to insert:\n");
    printf("1. int\n2. char\n3. short\n4. float\n5. double\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        if(int_flag == 0 && float_flag == 0)
        {
            printf("Enter the integer to add: ");
            scanf("%d", (int *)ptr+1);
            int_flag=1;
            //float_flag=1;
        }
        else
        {
            printf("Do not have enough space\n");
            //return -1;
        }
    }
    else if(choice == 2)
    {
        if(char_flag1 == 0 && double_flag == 0)
        {
            printf("Enter the character1 to add: ");
            scanf(" %c", (char *)ptr);
            char_flag1=1;
            //double_flag=1;
        }
        else if(char_flag2 == 0)
        {
            printf("Enter the character2 to add: ");
            scanf(" %c", (char *)ptr+1);
            char_flag2=1;
        }
        else
        {
            printf("Do not have enough space\n");
            //return -1;
        }
    }
    else if(choice == 3)
    {
        if(short_flag == 0)
        {
            printf("Enter the short int to add: ");
            scanf("%hd", (short *)ptr+1);
            short_flag=1;
            //int_flag=1;
            //float_flag=1;
        }
        else
        {
            printf("Do not have enough space\n");
            //return -1;
        }
    }
    else if(choice == 4)
    {
        if(int_flag == 0 && float_flag == 0)
        {
            printf("Enter the short int to add: ");
            scanf("%f", (float *)ptr+1);
            //short_flag=1;
            //int_flag=1;
            float_flag=1;
        }
        else
        {
            printf("Do not have enough space\n");
            //return -1;
        }
    }
    else if(choice == 5)
    {
        if(short_flag == 0 && int_flag == 0 && float_flag == 0 && char_flag1 == 0 && char_flag2 == 0 && double_flag == 0)
        {
            printf("Enter the short int to add: ");
            scanf("%lf", (double *)ptr);
            short_flag=1;
            int_flag=1;
            float_flag=1;
            char_flag1=1;
            char_flag2=1;
            double_flag=1;
        }
        else
        {
            printf("Do not have enough space\n");
            //return -1;
        }
    }
    else
    {
        printf("do not have enough space\n");
    }
}

void display_element(void *ptr)
{
    if(char_flag1 == 1)
    {
        printf("%d -> %c (char)\n", 0, *((char *)ptr));
    }
    if(char_flag2 == 1)
    {
        printf("%d -> %c (char)\n", 1, *((char *)ptr+1));
    }
    if(short_flag == 1)
    {
        printf("%d -> %hd (short)\n", 2, *((short *)ptr+1));
    }
    if(int_flag == 1)
    {
        printf("%d -> %d (int)\n", 4, *((int *)ptr+1));
    }
    if(float_flag == 1)
    {
        printf("%d -> %f (float)\n", 4, *((float *)ptr+1));
    }
    if(double_flag == 1)
    {
        printf("%d -> %lf (double)\n", 0, *((double *)ptr));
    }
}

void remove_element(void *ptr)
{
    display_element(ptr);
    int index;
    printf("Enter index from the displayed menu: ");
    scanf("%d", &index);
    switch(index)
    {
        case 0: char_flag1=0; double_flag=0; break;
        case 1: char_flag2=0; break;
        case 2: short_flag=0; break;
        case 4: int_flag=0; float_flag=0; break;
        default: printf("Invalid index\n");
    }
}