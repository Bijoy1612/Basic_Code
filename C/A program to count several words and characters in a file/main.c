#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char ch;
    int word=1,character=1;
    char fname[20];

	printf("Input the filename to be opened: ");
	scanf("%s",fname);

    fptr=fopen(fname,"r");
    if(fptr==NULL)
     {
         printf("File does not exist.");
      }
    else
        {
          ch=fgetc(fptr);
          printf("The content of the file %s are : \n",fname);
          while(ch!=EOF)
            {
                printf("%c",ch);
                if(ch==' '||ch=='\n')
                    {
                        word++;
                    }
                    else
                    {
                        character++;
                    }
                ch=fgetc(fptr);
            }
        printf("\nThe number of words in the  file %s are : %d\n",fname,word);
        printf("The number of characters in the  file %s are : %d\n\n",fname,character-1);
        }
    fclose(fptr);
}


