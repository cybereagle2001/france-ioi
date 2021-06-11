//coded by cybereagle2001

#include <stdio.h>

int main()
{
   int nbDeLigne,loop;
   char chaine[101];
   scanf("%d\n",&nbDeLigne);
   for (loop=1; loop<=nbDeLigne;loop++)
   {
      scanf("%[^\n]\n",chaine);
      if (loop%2 == 1)
      {
         printf("%s\n",chaine);
      }
   }
}
