#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("Input: ");
    scanf("%d",&marks);
    if(marks <0 || marks >100)
    {
        printf("Wrong Entry");
    }
    else if(marks >= 61 && marks <= 70)
    {
        printf("Grade: C");
    }
    else if(marks >= 71 && marks <= 80)
    {
        printf("Grade: B");
    }
    else if(marks >= 81 && marks <= 90)
    {
        printf("Grade: `A");
    }
    else if(marks >= 91 && marks <= 100)
    {
        printf("Grade: A+");
    }
    else
    {
        printf("Grade: Fail");
    }
    return 0;
}
