#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct car
{
    char name[100];
    char model[100];
    int year;
    int price;
};

int main()
{
    FILE *file;
    file = fopen("car.txt","w");
    struct car car[10];
    if(file==NULL)
    {
        printf("Error Occured\n");
        exit(1);
    }
    else
    {
        int n, i;
        printf("How many car information want to add?: ");
        scanf("%d", &n);
        fflush(stdin);

        for(i=0; i<n; i++)
        {
            printf("Enter car name: ");
            gets(car[i].name);
            fflush(stdin);
            printf("Enter model name: ");
            gets(car[i].model);
            printf("Enter year: ");
            scanf("%d", &car[i].year);
             printf("Enter price: ");
            scanf("%d", &car[i].price);
            fprintf(file,"Car Name: %s; Model: %s; Year: %d; Price: %d \n",car[i].name, car[i].model, car[i].year, car[i].price);
            printf("\n");
            fflush(stdin);
        }
        printf("\nAll info added!\n\n");
    }
    fclose(file);

    FILE *read;
    read = fopen("car.txt","r");
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
