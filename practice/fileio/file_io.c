#include<stdio.h>

#if 0
int main()
{
    FILE *fp;
    fp = fopen("testing.txt","r");
    if(fp == NULL)//if new.txt is not there, it returns NULL, but NULL cannot be accessed as an address(segmentation fault), to avoid it we are checking this condition
    {
        printf("File Not Present, Failure\n");
        return -1;
    }
    fclose(fp);
    return 0;
}
#endif

#if 0
int main()
{
    FILE *fp;
    fp = fopen("testing.txt","r");
    if(fp == NULL)
    {
        perror("ERROR");//automatically gives reason for the error
        //printf("File Not Present, Failure\n");
        return -1;
    }
    fclose(fp);
    return 0;
}
#endif

#if 0
int main()
{
    FILE *fp;
    fp = fopen("testing.txt","w");
    if(fp == NULL)
    {
        perror("Error");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    fclose(fp);
    return 0;
}
#endif

#if 0
int main()
{
    FILE *fp;
    fp = fopen("new.txt","a");
    if(fp == NULL)
    {
        perror("ERROR..");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    fclose(fp);
    return 0;
}
#endif

#if 0
// ? Printing the file contents on the screen
int main()
{
    FILE *fp;
    fp = fopen("testing.txt","r");
    if(fp == NULL)
    {
        perror("ERROR...");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    char ch;
    while(ch = fgetc(fp))
    {
        if(feof(fp))
            break;
        fputc(ch, stdout);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
#endif

#if 0
// ? Copying the file contents into another file
int main()
{
    FILE *fp;
    FILE *fptr;
    fp = fopen("testing.txt","r");
    fptr = fopen("copied.txt","w");
    if(fp == NULL || fptr == NULL)
    {
        perror("ERROR...");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    char ch;
    
    while(ch = fgetc(fp))
    {
        if(feof(fp))
            break;
        fputc(ch, fptr);
    }
    printf("\n");
    fclose(fp);
    fclose(fptr);
    return 0;
}
#endif

#if 0
int main()
{
    FILE *fp;
    fp = fopen("copied.txt","r");
    if(fp == NULL)
    {
        perror("ERROR...");
        //printf("File Not Present, Failure\n");
        return -1;
    }
    char ch;
    while((ch = fgetc(fp)) != EOF)  // ? EOF is -1 
    {
        fputc(ch, stdout);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
#endif

#if 0
int main()
{
    FILE *fp;
    fp = fopen("new.txt","w");
    char ch;
    ch = fgetc(fp);

    if(ferror(fp))
        fprintf(stderr,"ERROR... in reading file\n");

    //clearerr(fp); // ? If we comment this the error will show twice and uncomment will show error once

    if(ferror(fp))
        fprintf(stderr, "ERROR... in reading file\n");  // ? printf will print the content on standard output stream and fprintf will stderr,stdout and other file

    fclose(fp);
    return 0;
}
#endif

#if 0
// ? ftell() function will tell the position it is pointing to (Which character it is pointing to).
int main()
{
    FILE *fp, *fc;
    fp = fopen("testing.txt","r");
    fc = fopen("a.out","r");
    if(fp == NULL || fc == NULL)
    {
        perror("ERROR...");
        return -1;
    }
    char ch;
    printf("File Offset is at : %ld\n",ftell(fp));//0
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch,stdout);
    }
    //fseek(fp,0L, SEEK_END); // ? This is used to direct
    printf("\nFile Offset is at : %ld %ld\n",ftell(fp),ftell(fc));    // ? This will return the size of file
    fclose(fp);
    return 0; 
}
#endif

#if 0
// ? To find the position of char c
int main()
{
    FILE *fp;
    fp = fopen("new1.txt","r");
    if(fp == NULL)
    {
        perror("ERROR");
        return -1;
    }
    char ch;
    //ch = fgetc(fp);
    printf("C is in the position:\n");
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == 'C')
            printf("%ld ",ftell(fp));
        //fputc(ch,stdout);
    }
    fclose(fp);
    return 0;
}
#endif

#if 0
// ? fprintf, fscanf() and rewind()
int main()
{
    int n1, n2;
    float n3;
    char str[10], oper, ch;
    FILE *fp;
    if((fp = fopen("new.txt","w+")) == NULL)
    {
        perror("ERROR");
        return -1;
    }
    fprintf(fp,"%d %c %d %s %f\n",2,'+',1,"is",1.1);
    
    rewind(fp); // ? This will rewind / make the pointer point to begining of the file
    
    fscanf(fp,"%d %c %d %s %f",&n1,&oper,&n2,str,&n3);

    printf("%d %c %d %s %f\n",n1,oper,n2,str,n3);
    fclose(fp);
    return 0;
}
#endif 

#if 0
// ? fseek() 
int main()
{
    int n1, n2;
    float n3;
    char str[10], oper, ch;
    FILE *fp;
    if ((fp = fopen("text.txt","w+")) == NULL)
    {
        fprintf(stderr, "Can't open input file text.txt!\n");
        return 1;
    } 
    fprintf(fp,"%d %c %d %s %f\n",2,'+',1,"is",1.1);
    
    fseek(fp,0L,SEEK_SET);  // ? 0L is long type casted with macro SEEK_SET / This statement is similar to rewind
    
    fscanf(fp,"%d %c %d %s %f",&n1,&oper,&n2,str,&n3);

    printf("%d %c %d %s %f\n",n1,oper,n2,str,n3);
    fclose(fp);
    return 0;
}
#endif

#if 0
// ? fwrite() fread()
int main()
{
    int n1, n2, n3, n4;
    FILE *fp;
    if ((fp = fopen("text.txt","w+")) == NULL)
    {
        fprintf(stderr, "Can't open input file text.txt!\n");
        return 1;
    }
    scanf("%d %d",&n1,&n2);
    fwrite(&n1, sizeof(n1), 1, fp);
    fwrite(&n2,sizeof(n2), 1 , fp);
    rewind(fp);
    fread(&n3,sizeof(n3), 1, fp);
    fread(&n4, sizeof(n4), 1, fp);
    printf("%d %d\n",n4,n3);
    fclose(fp);
    return 0;
}
#endif

#if 0
// ? fread and fwrite using Structure 
struct Data
{
    int n1;
    char op;
    int n2;
    char str[10];
    float n3;
};
int main()
{
    struct Data d1 = {2 , '+', 1, "is", 1.1}, d2;
    FILE *fp;
    if ((fp = fopen("text.txt","w+")) == NULL)
    {
        fprintf(stderr, "Can't open input file text.txt!\n");
        return 1;
    } 
    fwrite(&d1, sizeof(d1), 1, fp);
    rewind(fp);
    fread(&d2, sizeof(d2), 1, fp);
    printf("%d %c %d %s %f\n",d2.n1,d2.op,d2.n2,d2.str,d2.n3);
    fclose(fp);
    return 0;
}
#endif

#if 1
int main()
{
    FILE *fp, *fc;
    fp = fopen("testing.txt","r");
    fc = fopen("n1.txt","w");
    if(fp == NULL || fc == NULL)
    {
        perror("error");
        return -1;
    }
    char ch;
    while(fread(&ch , sizeof(ch), 1, fp) > 0)
    {
        fwrite(&ch, sizeof(ch), 1, fc);
    }
    fclose(fc);
    fclose(fp);
    return 0;
}
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_PHONE_LEN 15
#define MAX_CONTACTS 100

// Structure to store contact details
typedef struct {
    char name[MAX_NAME_LEN];
    char phone[MAX_PHONE_LEN];
} Contact;

/**
 * Loads contacts from a file into an array of Contact structures.
 * 
 * @param filename The file to read from.
 * @param contacts Array to store loaded contacts.
 * @param maxContacts Maximum number of contacts that can be stored.
 * @return Number of contacts loaded, or -1 on error.
 */
int loadContactsFromFile(const char *filename, Contact contacts[], int maxContacts) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return -1;
    }

    int count = 0;
    char line[100];

    while (fgets(line, sizeof(line), file) && count < maxContacts) {
        // Remove newline character if present
        line[strcspn(line, "\n")] = '\0';

        // Parse name and phone from line (comma-separated)
        char *token = strtok(line, ",");
        if (token == NULL) continue;
        strncpy(contacts[count].name, token, MAX_NAME_LEN - 1);
        contacts[count].name[MAX_NAME_LEN - 1] = '\0';

        token = strtok(NULL, ",");
        if (token == NULL) continue;
        strncpy(contacts[count].phone, token, MAX_PHONE_LEN - 1);
        contacts[count].phone[MAX_PHONE_LEN - 1] = '\0';

        count++;
    }

    fclose(file);
    return count;
}

// Example usage
int main() {
    Contact contacts[MAX_CONTACTS];
    int loaded = loadContactsFromFile("contacts.txt", contacts, MAX_CONTACTS);

    if (loaded >= 0) {
        printf("Loaded %d contacts:\n", loaded);
        for (int i = 0; i < loaded; i++) {
            printf("%s - %s\n", contacts[i].name, contacts[i].phone);
        }
    } else {
        printf("Failed to load contacts.\n");
    }

    return 0;
}
