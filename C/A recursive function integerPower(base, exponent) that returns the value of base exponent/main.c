#include <stdio.h>
#include <stdlib.h>

int power(int,int);

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

int main()
{
    int b = 0;
    int e = 0;

    printf("Input a base: ");
    scanf("%d", &b);
    printf("Input an exponent: ");
    scanf("%d", &e);

    int result = power(b,e);

    printf("The Result is %d." , result);
    return 0;
}

