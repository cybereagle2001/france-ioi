//coded by cybereagle2001

#include <stdio.h>

int main()
{
   int nbDePopulation;
   int nbDeMalade =1;
   int jours=1;
   scanf("%d",&nbDePopulation);
   while(nbDeMalade < nbDePopulation)
   {
      jours+= 1;
      nbDeMalade *= 3;
   }
   printf("%d",jours);
}
