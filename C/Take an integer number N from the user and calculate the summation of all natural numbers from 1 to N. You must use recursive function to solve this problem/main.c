#include <stdio.h>
#include <stdlib.h>

int sum(int n);

int sum(int n) {
    if (n != 0)
        return n + sum(n - 1);
    else
        return n;
}
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum = %d", sum(n));
    return 0;
}
