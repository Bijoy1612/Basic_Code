#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, number, sum = 0;
    printf("How many number do you want to sum?\n");
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("Enter Inputs Number: ");
    i =0;
    while(i < n)
    {
        scanf("%d", &number);
        sum = sum + number;
        i++;
    }
    printf("Total Sum: %d", sum);
    return 0;
}
