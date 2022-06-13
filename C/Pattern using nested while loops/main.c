#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, row = 1, column, count = 1;
    printf("Enter a Number:");
    scanf("%d",&number);
    while(row <= number){
        column = 1;
        while(column <= row){
            printf("%d ", count++);
            column++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
