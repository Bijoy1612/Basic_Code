#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    char name[100];
    int roll;
};

int main()
{
    FILE *file;
    file = fopen("students.txt","w");
    struct student student[10];
    if(file==NULL)
    {
        printf("Error Occured\n");
        exit(1);
    }
    else
    {
        int n, i;
        printf("How many student information want to add?: ");
        scanf("%d", &n);
        fflush(stdin);

        for(i=0; i<n; i++)
        {
            printf("Enter student roll: ");
            scanf("%d", &student[i].roll);
            fflush(stdin);
            printf("Enter student name: ");
            gets(student[i].name);
            fprintf(file,"Roll_no = %d;  Name = %s\n",student[i].roll,student[i].name);
            printf("\n\n");
            fflush(stdin);
        }
        printf("\n\nAll info added!\n\n");
    }
    fclose(file);

    FILE *read;
    read = fopen("students.txt","r");
    char arr[100];
    if(read==NULL)
    {
        printf("Error opening\n");
    }
    else
    {
        printf("\n\nRead and output from file\n");
        fgets(arr, sizeof(arr), read);
        while(!feof(read))
        {
            printf("%s", arr);
            fgets(arr, sizeof(arr), read);
        }
        printf("\n\n");
    fclose(read);
    }
}
