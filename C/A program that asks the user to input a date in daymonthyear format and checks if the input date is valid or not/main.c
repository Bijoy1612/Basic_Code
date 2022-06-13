#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;
    printf("Enter a date/month/year: ");
    scanf("%d/%d/%d", &day, &month, &year);
    if(year >= 1522 && year <= 10000)
    {
        if(month >= 1 && month <= 12)
        {
            if((day >= 1 && day <= 28) && (month == 2)){
                printf("Output: Valid");
            }
            else if((day >= 1 && day <= 30) && (month == 4 || month == 6 || month == 9 || month == 11 )){
                printf("Output: Valid");
            }
            else if((day >= 1 && day <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )){
                printf("Output: Valid");
            }
            else if((day == 29 && month == 2) && (year %400 == 0 || (year %4 == 0 && year %100 != 0))){
                printf("Output: Valid");
            } else printf("Output: Not Valid");

        } else printf("Output: Not Valid");
    } else printf("Output: Not Valid");
    return 0;
}
