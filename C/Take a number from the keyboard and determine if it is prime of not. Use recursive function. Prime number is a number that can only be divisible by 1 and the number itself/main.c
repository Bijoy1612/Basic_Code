#include <stdio.h>
#include <stdlib.h>

int checkPrime(int);
int i, number;

int checkPrime(int number)
{
    if(i==1)
    {
        return 1;
    }
    else if(number%i==0)
    {
         return 0;
    }
    else
       {
         i = i -1;
         checkPrime(number);
      }
}
int main()
{

    int prime;

    printf("Input positive number: ");
    scanf("%d",&number);
    i = number/2;
    prime = checkPrime(number);
    if(prime==1)
        printf("%d is a prime number.\n",number);
        else
            printf("%d is not a prime number.\n",number);
        return 0;
}

