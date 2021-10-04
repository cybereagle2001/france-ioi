//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbKarvas;
   scanf("%d", &nbKarvas);
   repeat (nbKarvas)
   {
      int poids, age, longueurCornes, hauteurAuGarrot;
      scanf("%d %d %d %d", &poids, &age, &longueurCornes, &hauteurAuGarrot);
      printf("%d\n", longueurCornes * hauteurAuGarrot + poids);
   }
}
