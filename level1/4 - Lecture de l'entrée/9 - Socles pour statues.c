//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int largeurBas;
   int largeurHaut;
   scanf("%d", &largeurBas);
   scanf("%d", &largeurHaut);
   int volume = 0;
   int largeur = largeurHaut;
   repeat (largeurBas - largeurHaut + 1)
   {
      volume = volume + largeur * largeur;
      largeur = largeur + 1;
   }
   printf("%d\n", volume);
}
