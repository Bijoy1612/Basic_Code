#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
int main()
{
    int number1, number2, result=0;
    char ch;
    printf("Enter two number with expression: ");
    scanf("%d%c%d", &number1, &ch, &number2);
    switch(ch)
    {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        case '%':
            result = number1 % number2;
            break;
    }
    printf("Result = %d", result);
    return 0;
}

