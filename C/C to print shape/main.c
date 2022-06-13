#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 1, column,number;
    printf("Input number of rows: ");
    scanf("%d", &number);
    while (row <= number){
        column = 1;
        while (column <= row){
            if ((row+column) % 2 == 0){
                printf("1");
            }else printf("0");
            column++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
