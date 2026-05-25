#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    int id;
    char name[20];
    int *marks;
    float avg;
    char grade;
    
}student;

int main()
{
    int n, sub, tot_sum=0;
    
    printf("Enter no. of students: ");
    scanf("%d", &n);
    
    printf("Enter no. of subjects: ");
    scanf("%d", &sub);
    
    student s[n];
    
    char subject[sub][20];
    
    for(int i=0; i<sub; i++)
    {
        printf("Enter the name of subject %d: ", i+1);
        scanf("%s", subject[i]);
    }
    
    for(int i=0; i<n; i++)
    {
        tot_sum=0;
        printf("------Enter the student details------\n");
        printf("Enter the student roll no.: ");
        scanf("%d", &s[i].id);
        
        printf("Enter student %d name: ", i+1);
        scanf(" %[^\n]", s[i].name);
        
        s[i].marks = malloc(sub * sizeof(int));
        
        for(int j=0; j<sub; j++)
        {
            printf("Enter %s mark: ", subject[j]);
            scanf("%d", &s[i].marks[j]);
            tot_sum = tot_sum + s[i].marks[j];
            s[i].avg = tot_sum/sub;
        }
        
        if(s[i].avg >= 90)
            s[i].grade = 'A';

        else if(s[i].avg >= 75)
            s[i].grade = 'B';
        
        else if(s[i].avg >= 50)
            s[i].grade = 'C';
        
        else
            s[i].grade = 'D';
    }
    
    int choice, search_id, check=0;
    char search_name[20];
    char option;
    
    do
    {
        printf("\n\n----Display Menu----");
        printf("\n1. All student details\n2. Particular student details\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1)
        {
            for(int i=0; i<n; i++)
            {
                printf("Roll No: %d\n", s[i].id);
                printf("Name: %s\n", s[i].name);
                for(int j=0; j<sub; j++)
                {
                    printf("%s: %d\n", subject[j], s[i].marks[j]);
                }
                printf("Average: %g\n", s[i].avg);
                printf("Grade: %c\n", s[i].grade);
            }
        }
        else if (choice == 2)
        {
            printf("\n\n----Menu for particular student----");
            printf("\n1. Name");
            printf("\n2. Roll no");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                printf("Enter the name of the student: ");
                scanf(" %[^\n]", search_name);
                for(int i=0; i<n; i++)
                {
                    check = strcmp(search_name, s[i].name);
                    if (check == 0)
                    {
                        for(int i=0; i<1; i++)
                        {
                            printf("Roll No: %d\n", s[i].id);
                            printf("Name: %s\n", s[i].name);
                            for(int j=0; j<sub; j++)
                            {
                                printf("%s: %d\n", subject[j], s[i].marks[j]);
                            }
                            printf("Average: %g\n", s[i].avg);
                            printf("Grade: %c\n", s[i].grade);
                        }
                        break;
                    }
                    else
                    {
                        printf("Entered name doesn't match in the record\n");
                        break;
                    }
                }
                
            }
            else if (choice == 2)
            {
                printf("Enter the roll no. of the student: ");
                scanf("%d", &search_id);
                for(int i=0; i<n; i++)
                {
                    if (search_id == s[i].id)
                    {
                        printf("Roll No: %d\n", s[i].id);
                        printf("Name: %s\n", s[i].name);
                        for(int j=0; j<sub; j++)
                        {
                            printf("%s: %d\n", subject[j], s[i].marks[j]);
                        }
                        printf("Average: %g\n", s[i].avg);
                        printf("Grade: %c\n", s[i].grade);
                        break;
                    }
                    else
                    {
                        printf("Entered roll no. doesn't match in the record\n");
                        break;
                    }
                } 
            }
            else
            {
                printf("Invalid choice from particular student details\n");
            }
        }
        else
        {
            printf("Invalid choice from the display menu\n");
        }
        
        printf("\nDo you want to continue to display(y/n): ");
        scanf(" %c", &option);
    }
    while(option == 'Y' || option == 'y');
}
