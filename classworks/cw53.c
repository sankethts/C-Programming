
#include<stdio.h>
struct student
{
    char name[20];
    int marks1;
    int marks2;
    int marks3;
};
int main()
{
    int num;
    printf("Enter number of students: ");
    scanf("%d", &num);
    struct student s[num];
    FILE *fptr;
    if((fptr=fopen("t2.txt","w+"))==NULL)
    {
        perror("Error: ");
        return -1;
    }
    int sumM=0, sumP=0, sumC=0;
    for(int i=0; i<num; i++)
    {
        printf("Enter the name of student: ");
        scanf("%s", s[i].name);
        fwrite(s[i].name, sizeof(s[i].name), 1, fptr);
        printf("Enter P, C and M marks: ");
        scanf("%d %d %d", &s[i].marks1, &s[i].marks2, &s[i].marks3);
        fwrite(&s[i].marks1, sizeof(s[i].marks1), 1, fptr);
        fwrite(&s[i].marks2, sizeof(s[i].marks2), 1, fptr);
        fwrite(&s[i].marks3, sizeof(s[i].marks3), 1, fptr);
        sumM+=s[i].marks1;
        sumP+=s[i].marks2;
        sumC+=s[i].marks3;
        fwrite(&sumM, sizeof(sumM), 1, fptr);
        fwrite(&sumP, sizeof(sumP), 1, fptr);
        fwrite(&sumC, sizeof(sumC), 1, fptr);
    }
    for(int i=0; i<num; i++)
    {
        printf("%s %d %d %d\n", s[i].name, s[i].marks3, s[i].marks1, s[i].marks2);
        printf("%d %d %d\n", sumM, sumP, sumC);
    }
    float avgM, avgP, avgC;
    avgM=(float)sumM/num;
    avgP=(float)sumP/num;
    avgC=(float)sumC/num;
    printf("%g %g %g\n", avgM, avgP, avgC);
    fwrite(&avgM, sizeof(avgM), 1, fptr);
    fwrite(&avgP, sizeof(avgP), 1, fptr);
    fwrite(&avgC, sizeof(avgC), 1, fptr);
}