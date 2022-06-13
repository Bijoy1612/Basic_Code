#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int sum = 0;
    printf("Enter Input: ");
    while(1)
    {
        scanf("%c",&ch);
        if(ch == 'L' || ch == 'l'){
           sum = sum + 10;
        }
        if(ch == 'D' || ch == 'd'){
           sum = sum+5;
        }
        if(ch == 'R' || ch == 'r'){
           sum = sum-8;
        }
        if(ch == 'U' || ch == 'u'){
           sum = sum-3;
        }
        if(ch == 'X' || ch == 'x')
           break;

    }
    printf("Output:%d$",sum);
    return 0;
}
