//coded by cybereagle2001

#include <stdio.h>
#include <string.h>

int main()
{
   char titre[1001];
   int nbDeLivre,x;
   int max=0;
   scanf("%d\n",&nbDeLivre);
   for (int loop=0; loop<nbDeLivre;loop++)
   {
      scanf("%[^\n]\n",titre);
      x=strlen(titre);
      if (x> max)
      {
         printf("%s\n",titre);
         max= x;
      }
   }
}
