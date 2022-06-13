#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int main()
{
    int r, c, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r==1 || r==n || c==1 || c==n)
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
}
