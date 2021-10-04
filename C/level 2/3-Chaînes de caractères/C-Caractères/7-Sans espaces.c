//coded by cybereagle2001

#include <stdio.h>
#include <string.h>

int main()
{
   char text[100];
   scanf("%[^\n]\n",text);
   int x=strlen(text);
   for (int loop =0; loop< x;loop++)
   {
      if (text[loop]== ' ')
      {
         text[loop]='_';
      }
   }
   printf("%s",text);
}
