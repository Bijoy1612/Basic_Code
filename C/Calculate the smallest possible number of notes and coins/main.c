#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    printf("Enter the amount of Tk: ");
    scanf("%f", &n);
    int integer, i, f, floatPoint;
    integer = n; // fraction to integer

    printf("NOTES:\n");

    printf("%d note(s) of Tk. 100.00\n", integer/100);
    i = integer % 100;

    printf("%d note(s) of Tk. 50.00\n", i/50);
    i = i % 50;

    printf("%d note(s) of Tk. 20.00\n", i/20);
    i = i % 20;

    printf("%d note(s) of Tk. 10.00\n", i/10);
    i = i % 10;

    printf("%d note(s) of Tk. 5.00\n", i/5);
    i = i % 5;

    printf("%d note(s) of Tk. 2.00\n", i/2);
    i = i % 2;

    printf("COINS:\n");

    printf("%d coin(s) of Tk. 1.00\n", i/1);
    floatPoint = (n * 100) - (integer * 100);

    printf("%d coin(s) of Tk. 0.50\n", floatPoint/50);
    f = floatPoint % 50;

    printf("%d coin(s) of Tk. 0.25\n", f/25);
    f = f % 25;

    printf("%d coin(s) of Tk. 0.10\n", f/10);
    f = f % 10;

    printf("%d coin(s) of Tk. 0.05\n", f/5);
    f = f % 5;

    printf("%d coin(s) of Tk. 0.01\n", f/1);
    f = f % 1;

    return 0;
}
