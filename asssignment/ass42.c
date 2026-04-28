#include<stdio.h>
int int_flag=0, char_flag1=0, char_flag2=0, short_flag=0, float_flag=0, double_flag=0;
void add_element(void *ptr)
{
    int choice;
    printf("Enter the type you have to insert:\n");
    printf("1. int\n2. char\n3. short\n4. float\n5. double\n");
    scanf("%d", &choice);
    if(choice == 1)


}
int main()
{
    int choice;
    void *ptr = malloc(8);
    printf("Menu :\n");
    printf("1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        add_element(ptr);
    }
    
}