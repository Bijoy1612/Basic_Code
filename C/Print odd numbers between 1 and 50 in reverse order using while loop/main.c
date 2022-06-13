#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 50;
    printf("List of odd numbers between 1 and 50 in reverse order: \n");
    while(i <= 50)
    {
        if(i % 2 == 1)
        {
            printf("%d",i);
        }
        i--;
    }
    return 0;
}
