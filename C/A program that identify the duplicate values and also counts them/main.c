#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],r,i=1,j,n;
    printf("Enter some numbers: ");
    scanf("%d",&a[0]);
    n = a[0];
    if(n==-1)
    {
        printf("None");
    }
    else
    {
        while(n!=-1)
        {
            scanf("%d",&a[i]);
            n = a[i];
            i++;
        }

        r=n=0;
        for(j=0;j<i-1;j++)
        {
			if(a[j]==a[j+1])
			{
				r++;
				n=a[j];
			}
        }
        if(r>0)
		{
			r=r+1;
		}

    printf("Output:%d present %d times",n,r);
    }
}
