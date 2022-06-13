#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int x,y,z;
    printf("Choose a between 1 to 6 numbers: ");
    scanf("%d",&z);
    srand(time(0));
    x=1+rand()%6;
    y=1+rand()%6;
    if(x==z && y==z)
    {
       printf("Win\n");
    }
    else
    {
        printf("Lose\n");
    }

}

