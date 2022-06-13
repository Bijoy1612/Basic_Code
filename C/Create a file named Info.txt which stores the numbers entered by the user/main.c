#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
//create Info.txt file
FILE *fptr;
fptr =fopen("Info.txt","w");
int n;
if(fptr == NULL)
{
printf("File dose not exist");
exit(0);
}
//write the data from user input
printf("Enter the numbers(press -1 to exit):\n");
while(n!=-1)
{
scanf("%d",&n);
if(n!=-1)
{
fprintf(fptr,"%d ",n);
}
}
printf("All number are stored..\n");
fclose(fptr);

return 0;
}
