#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkPalindrome(char *s)
{
    int i,n,l;
    n=strlen(s)-1;
	for(i=0; i<=n; i++)
    {
        s[i]=tolower(s[i]);
    }
    while(l <=n){
        if (!(s[l] >= 'a' && s[l] <= 'z'))
            l++;
         else if (!(s[n] >= 'a' && s[n] <= 'z'))
            n--;
         else if (s[l] == s[n])
         {
             l++, n--;
         } else return 0;
    }
 }
int main()
{

    char s[1000];
    printf("Enter the string: ");
    gets(s);
    printf("Output:");
    if(checkPalindrome(s))
    {
       printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
