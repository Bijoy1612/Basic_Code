#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, highest, lowest, difference;
    printf("Enter Numbers: ");
    scanf("%d", &number);
    highest = lowest = number;
    while(number != -1){
        if(highest < number)
            highest = number;
        if(lowest > number)
            lowest = number;
        scanf("%d", &number);
    }
    printf("Difference: %d ", highest - lowest);
    return 0;
}
