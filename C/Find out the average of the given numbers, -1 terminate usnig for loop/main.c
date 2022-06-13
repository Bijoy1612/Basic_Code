#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0, count = 0;
    printf("Enter Numbers (For Exit Enter(-1): \n");
    for(; ;){
        scanf("%d", &i);
        if (i == -1)break;
        else{
            sum += i;
            count++;
        }
    }
    printf("Output of the Numbers Average: %.2f", ((float)sum / count));
    return 0;
}
