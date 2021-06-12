//coded by cybereagle2001

#include <stdio.h>
#include <string.h>

int main()
{
   int nbDeLigne,x;
   char text[1000];
   scanf("%d\n",&nbDeLigne);
   for (int loop=0; loop<nbDeLigne;loop++)
   {
      scanf("%[^\n]\n",text);
      x=strlen(text);
      for (int j=x-1; j>=0;j=j-1)
      {
         printf("%c",text[j]);
      }
      printf("\n");
   }
}
