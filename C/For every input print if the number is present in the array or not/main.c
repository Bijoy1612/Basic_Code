#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int a[50],i,n,count;
    int ;
    srand(time(0));
    for(i=0; i<50; i++)
    {
        a[i]=rand()%50;
    }
    printf("Enter an integer(-1 to terminate):\n");
    printf("Enter again an integer: ");
    scanf("%d",&n);
    while(n!=-1)
    {
        for(i = 0; i < 50; i++)
        {
        	count = 0;
            if(a[i]==n)
            {
            	count=1;
                break;
            }
        }
        if(count==1)
        {
			printf("Number is Present\n");
        }
        else
        {
            printf("Number is not Present\n");
        }
        printf("Enter again an integer: ");
        scanf("%d",&n);
}
    return 0;
}
