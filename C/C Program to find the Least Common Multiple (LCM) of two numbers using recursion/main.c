#include <stdio.h>
#include <stdlib.h>

int m = 0;

int lcm(int a, int b)
{

    m= m+b;
    if((m % a == 0) && (m % b == 0))
    {
        return m;
    }
    else
    {
        lcm(a,b);
    }
}

int main()
{
    int n1, n2, lcm1;
    printf("Input 1st number for LCM: ");
    scanf("%d", &n1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &n2);
    if(n1 >  n2)
        lcm1 = lcm(n2, n1);
    else
        lcm1 = lcm(n1, n2);
    printf("The LCM of %d and %d :  %d\n\n", n1, n2, lcm1);
    return 0;
}

