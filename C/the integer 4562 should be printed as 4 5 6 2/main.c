#include <stdio.h>
#include <stdlib.h>


int integer(int a, int b){
    return a/b;
}

int remainder(int a, int b){
    return a- integer(a, b)*b;
}

int separate(int n){
    if (n>10)
        separate(integer(n, 10));
        printf("%d ", remainder(n, 10));
}

int main()
{
    int n;
    printf("Enter a Number between 1 to 32767: ");
    scanf("%d", &n);
    separate(n);
    return 0;
}
