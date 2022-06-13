#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    int Count=0,CountAPlus=0,CountA=0,CountAMinus=0,CountBPlus=0,CountB=0,CountBMinus=0,CountCPlus=0,CountC=0,CountCMinus=0,CountDPlus=0,CountD=0,CountF=0;
    int sum=0;
    for(;;){
        printf("\nEnter Marks(For Exit Enter(-1) --): \n");
        scanf("%d",&mark);
        if(mark!=-1){
        if (mark<=100 && mark>=97){
            CountAPlus++;
        }
        else if (mark>=90 && mark<=96){
            CountA++;
        }
        else if (mark>=87 && mark<=89){
            CountAMinus++;
        }
        else if (mark>=84 && mark<=87){
            CountBPlus++;
        }
        else if (mark>=80 && mark<=83){
            CountBMinus++;
        }
        else if (mark>=77 && mark<=79){
            CountB++;
        }
        else if (mark>=74 && mark<=76){
            CountCPlus++;
        }
        else if (mark>=70 && mark<=73){
            CountC++;
        }
        else if (mark>=67 && mark<=69){
            CountCMinus++;
        }
        else if (mark>=64 && mark<=66){
            CountDPlus++;
        }
        else if (mark>=61 && mark<=63){
            CountD++;
        }
        else if (mark<=60 && mark>=0){
            CountF++;
        }
        else if(mark==-1)
            printf("....Thank You....");
        else
            printf("Marks Must be Between 0 to 100\n");
        if(mark!=-1){
            Count++;
            if(mark<=60 && mark>=0)
                Count--;
            else{
                sum+=mark;
            }
        }
    }else break;
    }
    printf("\nA+ = %d",CountAPlus);
    printf("\nA = %d",CountA);
    printf("\nA- = %d",CountAMinus);
    printf("\nB+ = %d",CountBPlus);
    printf("\nB = %d",CountB);
    printf("\nB- = %d",CountBMinus);
    printf("\nC+ = %d",CountCPlus);
    printf("\nC = %d",CountC);
    printf("\nC- = %d",CountCMinus);
    printf("\nD+ = %d",CountDPlus);
    printf("\nD = %d",CountD);
    printf("\nFail = %d",CountF);
    printf("\nPassed = %d", Count);
    printf("\nTotal Marks= %d",sum);
    //printf("\nAverage of Marks= %0.3f",(sum*1.0)/Count);

    return 0;
}
