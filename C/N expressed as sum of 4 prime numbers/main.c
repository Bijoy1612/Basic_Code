#include <stdio.h>
#include <stdlib.h>

int checkPrime(int n);

int main() {
  int n, i, flag = 0, number;
  printf("Enter a positive integer: ");
  scanf("%d", & n);

  if (n % 2 == 0)
  {
    for (i = 2; i <= (n-5) / 2; ++i)
        {
    // condition for i to be a prime number
    if (checkPrime(i) == 1)
    {
      // condition for n-i to be a prime number
      if (checkPrime((n-5) - i) == 1)
      {
        printf("%d = 2  3  %d  %d\n", n, i, n-5 - i);
        flag = 1;
        break;
      }
    }
  }
  }
  if (n % 2 == 1)
  {
    for (i = 2; i <= (n-4) / 2; ++i)
        {
    // condition for i to be a prime number
    if (checkPrime(i) == 1) {
      // condition for n-i to be a prime number
      if (checkPrime((n-4) - i) == 1)
      {
        printf("%d = 2  2  %d  %d\n", n, i, n-4 - i);
        flag = 1;
        break;
      }
    }
  }
  }
  if (flag == 0)
    printf("%d cannot be expressed as the four of two prime numbers.", n);
  return 0;
}

// function to check prime number
int checkPrime(int n)
{
  int i, isPrime = 1;
  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1)
    {
    isPrime = 0;
  } else
  {
    for (i = 2; i <= n / 2; ++i)
    {
      if (n % i == 0)
      {
        isPrime = 0;
        break;
      }
    }
  }
  return isPrime;
}
