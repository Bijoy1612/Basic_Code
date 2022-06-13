#include <stdio.h>
#include <stdlib.h>

int Fibonacci( int *fPtr);
int Fibonacci(int *fPtr)
{
    int first=0, second=1, next;
    if (*fPtr<=1)
        *fPtr;
    else{
        for (int i=2; i<*fPtr; i++){
            next = first + second;
            first = second;
            second = next;
        }
        *fPtr = next;
    }
}
int main()
{
    int n = 0,i=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    i=n;
    Fibonacci(&n);
    printf("Fibonacci term is = %d",n);
    return 0;
}

