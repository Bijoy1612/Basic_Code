#include <stdio.h>
#include <math.h>

int main()
{
    int number, sum=0;
    printf("Enter a Number for the Series: ");
    scanf("%d", &number);
    for(int i=0; i<=number; i++)
    {
        sum =sum+ i*pow(3,i);
    }
    printf("%d",sum);
    return 0;
}
