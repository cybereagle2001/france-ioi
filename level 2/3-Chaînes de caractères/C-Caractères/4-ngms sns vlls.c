//coded by cybereagle2001
#include <stdio.h>
#include <string.h>
int main()
{
   for (int idLigne = 0; idLigne < 2; idLigne = idLigne + 1)
   {
      char ligne[101];
      scanf("%[^\n]\n", ligne);
      int longueurLigne = strlen(ligne);
      for (int idLettre = 0; idLettre < longueurLigne; idLettre = idLettre + 1)
      {
         char car = ligne[idLettre];
         if (car != ' ' && car != 'A' && car != 'E' && car != 'I' &&
             car != 'O' && car != 'U' && car != 'Y')
         {
            printf("%c", car);
         }
      }
      printf("\n");
   }
}
