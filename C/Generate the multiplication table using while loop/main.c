#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0,number;
    printf("Input: ");
    scanf("%d", &number);
    printf("Output: \n");
    while (i <= 10)
    {
        printf("%d * %d = %d \n", number, i, number*i);
        i++;
    }
    return 0;
}
