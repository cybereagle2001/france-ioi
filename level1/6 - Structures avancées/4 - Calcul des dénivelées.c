//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop=1, _max=nb; _loop<= _max; _loop++)

int main()
{
   int nbDeVariation;
   int descente=0;
   int monter =0;
   scanf("%d",&nbDeVariation);
   repeat(nbDeVariation)
   {
      int variation;
      scanf("%d",&variation);
      if (variation<0)
      {
         descente = descente+ variation;
      }
      else 
      {
         monter= monter + variation;
      }
   }   
   descente = -descente;
   printf("%d\n", monter);
   printf("%d", descente);
}
