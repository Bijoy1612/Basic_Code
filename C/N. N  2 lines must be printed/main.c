#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, number = 1;
    printf("Enter a Number: ");
    scanf("%d", &i);
    printf("Output: \n");
    while(number <= i)
    {
        printf("%d %d %d \n", number, number*number, number*number*number);
        printf("%d %d %d\n", number, (number*number)+1, (number*number*number)+1);
        number++;
    }
    return 0;
}
