#include <stdio.h>
#include <stdlib.h>

int helloWorld(int number)
{
    if(number>0){
        printf("Hello World\n");
        helloWorld(number-1);
    }
}

int main()
{
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    helloWorld(number);
    return 0;
}
