#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sentence [1000];
    int words = 0, digits = 0, consonents = 0, vowels = 0, whitespace = 0, characters = 0;
    char c;
    printf("Enter a Sentence: ");
    gets(sentence);
    printf("%s", sentence);
    int i = 0;

    while (*(sentence+i)!='\0')
        {
        c = *(sentence+i);
        if(c==' '){
            whitespace++;
            if(*(sentence+i-1)!=' ')
                words++;
        }
        else if(c>='0'&& c<='9')
        {
            digits++;
        }
        else if((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
        {
            if(c=='a'||c=='e'||c=='i'||c=='o'|| c=='u'||c=='A'||c=='E'||c=='I'||c=='O'|| c=='U'){
                vowels++;
            } else{
                consonents++;
            }
        }
        characters++;
        i++;
    }
    if(*(sentence+i-1)!=' ')
        words++;

    printf("\nWords = %d\nDigits = %d\nVowels = %d\nConsonents = %d\nCharacters = %d\n",words, digits, vowels, consonents, characters);
    return 0;
}
