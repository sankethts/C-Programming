#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
}s={26,"sanketh",95.23};

struct student s1={23,"jenny",78.99};

int main()
{
    struct student s2;
    s2=s1;
    struct student s3={56,"dengu",99.54};

    printf("Enter the info of student s\n");
    printf("%d %s %g\n", s.rollno, s.name, s.marks);

    printf("Enter the info of student s1\n");
    printf("%d %s %g\n", s1.rollno, s1.name, s1.marks);

    printf("Enter the info of student s2\n");
    printf("%d %s %g\n", s2.rollno, s2.name, s2.marks);

    printf("Enter the info of student s3\n");
    printf("%d %s %g\n", s3.rollno, s3.name, s3.marks);

    struct student s4;
    printf("Enter the info of student s4\n");
    scanf("%d %s %f", &s4.rollno, &s4.name, &s4.marks);
    printf("%d %s %g\n", s4.rollno, s4.name, s4.marks);
}