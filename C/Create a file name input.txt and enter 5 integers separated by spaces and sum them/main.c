#include<stdio.h>
#include<stdlib.h>

int main()
{
    //create numbers.txt file
FILE *fptr;
int num[100];
int sum=0;
fptr =fopen("input.txt","w");
int n;
if(fptr == NULL)
{
printf("File dose not exist");
exit(0);
}
//write the data from user input
int m, i;
printf("How many number want to add?: ");
scanf("%d",&m);
printf("Enter  numbers: \n ");
for(i=1; i<=m; i++)
{
scanf("%d",&num[i]);
fprintf(fptr,"%d ",i);
sum = sum + num[i];
}
    printf("\nSum is: %d", sum);
    fprintf(fptr,"\nSum is = %d", sum);

fclose(fptr);
}
