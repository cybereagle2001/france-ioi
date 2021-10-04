//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbNombres;
   scanf("%d", &nbNombres);
   int resultat = 66;
   int facteur = 1;
   repeat(nbNombres)
   {
      resultat = resultat * facteur;
      facteur = facteur + 1;
      printf("%d\n", resultat);
   }
}
