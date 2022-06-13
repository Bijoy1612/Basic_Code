#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, factorial = 1;
    printf("Enter a Positive Number: ");
    scanf("%d", &number);
    if(number != 0 && number != 1){
        for(int i=number; i>0; i--){
            factorial *= i;
        }
    }
    printf("Result: %d", factorial);
    return 0;
}
