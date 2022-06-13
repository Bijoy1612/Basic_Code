#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum = 0.0;
    int n, i =0, numerator =1, denominator =1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Series is: ");
    while(i < n)
    {
        printf("%d/%d + ", numerator, denominator);
        sum += numerator/denominator * 1.0;
        numerator += 2;
        denominator *= 2;
        i++;
    }
    printf("\nSeries Sum: %f", sum);
    return 0;
}
