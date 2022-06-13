#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row =1, column, number;
    printf("Input number of rows: ");
    scanf("%d", &number);
    for(row = number; row >= 1; row--){
        for(column=1; column<=number-row; column++){
            printf(" ");
        }
        for(column=1; column<=row; column++)
            printf("*");
        printf("\n");
    }
    return 0;
}
