//
#include<stdio.h>
struct student
{
    char name[20];
    int marks[3];
};
int main()
{
    int num;
    //printf("Enter the number of students: ");
    scanf("%d", &num);
    if(num<=0)
    {
        printf("0.00 0.00 0.00\n");
        return 0;
    }
    struct student s[num];
    for(int i=0; i<num; i++)
    {
        printf("Enter name of student: ");
        scanf("%s", s[i].name);
        printf("Enter P, C and M marks: ");
        scanf("%d %d %d", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);
    }
    //printf("\n------------------------\nName Maths Physics Chemistry\n--------------------------\n");
    for(int i=0; i<num; i++)
    {
        printf("%s %d %d %d\n\n", s[i].name, s[i].marks[2], s[i].marks[0], s[i].marks[1]);
    }
    //printf("\n--------------------------------------------------------------\n");
    int sumM=0, sumP=0, sumC=0;
    for(int i=0; i<num; i++)
    {
        sumM+=s[i].marks[2];
        sumP+=s[i].marks[0];
        sumC+=s[i].marks[1];
    }
    float avgM=0, avgP=0, avgC=0;
    avgM=sumM/(float)num;
    avgP=sumP/(float)num;
    avgC=sumC/(float)num;
    printf("%.2f %.2f %.2f\n", avgM, avgP, avgC);
    //printf("\n--------------------------------------------------------------\n");
}