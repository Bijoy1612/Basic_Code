#include <stdio.h>
#include <stdlib.h>

int MAX(int n1,int n2)
{
    if(n1>n2)
        return n1;
    else
        return n2;
}

int GCD(int number1,int number2)
{
    int Gcd;
    Gcd = MAX(number1,number2);
    while(Gcd%number1==0 && Gcd%number2==0){
        return Gcd;
    }
}


int main()
{
    int number1, number2,gcd;
    printf("Enter two integer Number: \n");
    scanf("%d %d",&number1,&number2);
    gcd = GCD(number1,number2);
    printf("The GCD of %d and %d is %d\n",number1,number2,gcd);
    return 0;
}
