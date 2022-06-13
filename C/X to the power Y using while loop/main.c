#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, result = 1;
    printf("Enter base as an integer: ");
    scanf("%d", &x);
    printf("Enter exponent as an integer: ");
    scanf("%d", &y);
    while(y !=0){
        result *= x;
        y--;
    }
    printf("x^y = %d", result);
    return 0;
}
