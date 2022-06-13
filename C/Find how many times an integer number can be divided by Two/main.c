#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, count =0;
    printf("Enter a number: ");
    scanf("%d", &i);
    while(i > 0 && (i % 2 == 0))
    {
        count ++;
        i = i/2;
    }
    printf("Entire number divided by two: %d times", count);
    return 0;
}
