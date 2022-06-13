#include <stdio.h>
#include <stdlib.h>

void merge(int [], int, int [], int, int []);

void merge(int a[], int m, int b[], int n, int sorted[])
{
  int i, j, k;
  j = k = 0;
  for (i = 0; i < m + n;)
    {
    if (j < m && k < n)
    {
      if (a[j] < b[k])
      {
        sorted[i] = a[j];
        j++;
      }
      else {
        sorted[i] = b[k];
        k++;
      }
      i++;
    }
    else if (j == m)
    {
      for (; i < m + n;)
       {
        sorted[i] = b[k];
        k++;
        i++;
      }
    }
    else {
      for (; i < m + n;)
      {
        sorted[i] = a[j];
        j++;
        i++;
      }
    }
  }
}
int main()
{
     int a[100], b[100], m, n, c, sorted[200];
      printf("Input number of elements in large array: ");
      scanf("%d", &m);
      printf("Input %d integers: ", m);
      for (c = 0; c < m; c++)
        {
        scanf("%d", &a[c]);
        }
      printf("Input number of elements in small array: ");
      scanf("%d", &n);
      printf("Input %d integers: ", n);
      for (c = 0; c < n; c++)
      {
        scanf("%d", &b[c]);
      }

      printf("\nThe Large Array is: ");
      for (c = 0; c < m; c++)
        {
        printf("%d ", a[c]);
        }

      printf("\nThe Small Array is: ");
      for (c = 0; c < n; c++)
      {
        printf("%d ",b[c]);
      }
      merge(a, m, b, n, sorted);
      printf("\nAfter Merge the New Array is: \n");
      for (c = 0; c < m + n; c++)
      {
        printf("%d ", sorted[c]);
      }
      return 0;
}
