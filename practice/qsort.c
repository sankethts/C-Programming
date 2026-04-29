#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
// Sorting integers
int ascending(const void *a, const void *b);
void print_arr(int arr[], int n);
int descending(const void *a, const void *b);
int main()
{
    int arr[]={9,2,6,1,7,4,8,3};
    int n=sizeof(arr)/sizeof(int);

    qsort(arr, n, sizeof(int), ascending);
    printf("Ascending: ");
    print_arr(arr, n);
    qsort(arr, n, sizeof(int), descending);
    printf("Descending: ");
    print_arr(arr, n);
}
int ascending(const void *a, const void *b)
{
    return *(int *)a > *(int *)b;
}
void print_arr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int descending(const void *a, const void *b)
{
    return *(int *)a < *(int *)b;
    //return ascending(b, a); // simple swap arguments
}
#endif

#if 0
// Sorting strings
int cmp_strings(const void *a, const void *b);
int main()
{
    char *fruits[] = {"mango", "banana", "cherry", "orange", "grapes"};
    int n = sizeof(fruits)/sizeof(char *);
    //printf("%d", n);
    qsort(fruits, n, sizeof(char *), cmp_strings);
    
    for(int i=0; i<n; i++)
    {
        printf("%s ", fruits[i]);
    }
    printf("\n");
}

int cmp_strings(const void *a, const void *b)
{
    // a and b are pointers to char * elements
    const char *sa = *(const char **)a;
    const char *sb = *(const char **)b;
    return strcmp(sb, sa);
}
#endif

#if 1
// Sorting structs
typedef struct
{
    char name[50];
    int age;
    float gpa;
}student;

int by_age(const void *a, const void *b);
void print_arr(student s[], int n);
int by_gpa(const void *a, const void *b);
int by_name(const void *a, const void *b);

int main()
{
    student s[]={{"Devanshu", 21, 8.9}, {"sanketh", 22, 8.25}, {"nikhil", 22, 8.5}, {"akshay", 22, 9.5}};
    int n = sizeof(s)/sizeof(student);
    //printf("%d", n);
    printf("=== Sorted by Age ===\n");
    qsort(s, n, sizeof(student), by_age);
    print_arr(s, n);

    printf("=== Sorted by GPA (desc)===\n");
    qsort(s, n, sizeof(student), by_gpa);
    print_arr(s, n);

    printf("=== Sorted by Name ===\n");
    qsort(s, n, sizeof(student), by_name);
    print_arr(s, n);
}

int by_age(const void *a, const void *b)
{
    const student *sa = (const student *)a;
    const student *sb = (const student *)b;
    return sa->age - sb->age;
    //return *(int *)a->age > *(int *)b->age;
}

void print_arr(student s[], int n)
{
    printf("%-20s %5s %5s\n", "Name", "Age", "GPA");
    printf("-------------------------------\n");
    for(int i=0; i<n; i++)
    {
        printf("%-20s %5d %5.2f\n", s[i].name, s[i].age, s[i].gpa);
    }
    printf("\n");
}

int by_gpa(const void *a, const void *b)
{
    const student *sa = (const student *)a;
    const student *sb = (const student *)b;
    if (sa->gpa > sb->gpa) return -1;
    if (sa->gpa < sb->gpa) return  1;
    return 0;
}

int by_name(const void *a, const void *b) 
{
    const student *sa = (const student *)a;
    const student *sb = (const student *)b;
    return strcmp(sa->name, sb->name);
}
#endif