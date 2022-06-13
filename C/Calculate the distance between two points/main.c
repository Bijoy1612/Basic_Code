#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2, distance =0;
    printf("Enter First Coordinate (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter First Coordinate (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0){
        if (distance <= 10){
            printf("Near");
        } else printf("Far");
    }
    return 0;
}
