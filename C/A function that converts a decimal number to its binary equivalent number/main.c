#include <stdio.h>
#include <stdlib.h>

void convertionD2B(int *n);

void convertionD2B(int *n)
{
    int array[100],i;
    for(i=0;*n>0;i++)
    {
        array[i]=*n%2;
        *n=*n/2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",array[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Equivalent Binary: ");
    convertionD2B(&n);
    return 0;
}

