#include <stdio.h>
#include <stdlib.h>

int checking(int area);
int area(int r);

int area(r)
{
    return (3.1416*(r*r));
}

int checking(area)
{
    if(area>25){
        printf("Greater Than 25\n");
    }
    else if(area<25){
        printf("Less Than 25\n");
    }
}

int main()
{
    int radius;
    printf("Enter radius of a circle: ");
    scanf("%d",&radius);
    printf("The area is %d\n",area(radius));
    checking(area(radius));

    return 0;
}


