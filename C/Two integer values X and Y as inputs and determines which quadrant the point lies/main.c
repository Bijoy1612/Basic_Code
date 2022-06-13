#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2;
    printf("Enter a Coordinate: ");
    scanf("%d %d", &number1, &number2);
    if(number1 > 0 && number2 > 0)
        printf("First Quadrant");
    else if(number1 < 0 && number2 > 0)
        printf("Second Quadrant");
    else if(number1 < 0 && number2 < 0)
        printf("Third Quadrant");
    else if(number1 > 0 && number2 < 0)
        printf("Fourth Quadrant");
    else if(number1 == 0 && number2 == 0)
        printf("Origin");
    return 0;
}
