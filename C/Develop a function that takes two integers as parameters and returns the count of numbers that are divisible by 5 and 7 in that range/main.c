#include <stdio.h>
#include <stdlib.h>

int divide(int x, int y);

int divide(int x, int y)
{
    int i, count5=0, count7=0;
    for (i = x; i < y; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d is divisible by 5\n", i);
            count5++;
        }
        if(i % 7 == 0)
        {
            printf("%d is divisible by 7\n", i);
            count7++;
        }
    }
    printf("\nNumber of integers divisible by 5 between %d and %d = %d\n", x, y, count5);
    printf("Number of integers divisible by 7 between %d and %d = %d\n\n", x, y, count7);
}

int main()
{
    int x, y;
    printf("Enter range numbers: \n");
    scanf("%d%d", &x, &y);
    divide(x,y);
}
