#include<stdio.h>
#include <stdlib.h>

int oddCount(int array[], int array_size)
{
    int i,j;
    for (i = 0; i < array_size; i++) {
        int count = 0;
        for (j = 0; j < array_size; j++)
        {
            if (array[i] == array[j])
                count++;
        }
        if (count % 2 != 0)
            return array[i];
    }
    return -1;
}

int main()
{
     int array[] = { 8,3,8,5,4,3,4,3,5 };
     int n = sizeof(array) / sizeof(array[0]);
     int i;
     printf("Given Array is: ");
     for(i =0 ; i <= n; i++)
     {
         printf("%d ", array[i]);
     }
     printf("\nThe element odd number of times: %d\n", oddCount(array, n));
     return 0;
}
