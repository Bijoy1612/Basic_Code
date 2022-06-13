#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char* texts[500];
    printf("How many sentences want to write? :");
    int n;
    scanf("%d", &n);
    printf("Enter %d Texts: \n", n);
    for (int i = 0; i <= n; i++) {
        texts[i] = (char*)malloc(sizeof(char)*100);
        gets (texts[i]);
    }

    char *temp;
    for (int i = 0; i <= n; i++) {
        for(int j = i+1; j <=n ; j++){
            if(strcmp(*(texts+i), *(texts+j)) > 0){
                temp = *(texts+i);
                *(texts+i) = *(texts+j);
                *(texts+j) = temp;
            }
        }
    }
    printf("\n");
    printf("Output: \n");
    for (int i = 0; i <= n ; i++) {
        printf("%s\n", texts[i]);
    }

    return 0;
}

