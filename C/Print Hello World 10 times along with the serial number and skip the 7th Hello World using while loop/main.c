#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, n;
    printf("Enter a Number:");
    scanf("%d", &n);
    while(i <= n)
    {
        if(i !=7)
        {
            printf("%d  Hello World\n", i);
        } i++;
    }
    return 0;
}
