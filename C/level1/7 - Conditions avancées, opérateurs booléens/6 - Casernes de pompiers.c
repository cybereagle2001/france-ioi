//coded by cybereagle2001
# include <stdio.h>
# define repeat(nb) for (int _loop=1, _max=nb; _loop <= _max; _loop++)

int main()
{
   int nbDePair;
   int abmin,abmax,ordmin,ordmax;
   int abmin1,abmax1,ordmin1,ordmax1;
   scanf("%d", &nbDePair);
   repeat(nbDePair)
   {
      scanf("%d",&abmin);
      scanf("%d",&abmax);
      scanf("%d",&ordmin);
      scanf("%d",&ordmax);
      scanf("%d",&abmin1);
      scanf("%d",&abmax1);
      scanf("%d",&ordmin1);
      scanf("%d",&ordmax1);
      if ((abmax1<= abmin)|| (ordmax1<= ordmin) || (abmax<= abmin1) || (ordmax<=ordmin1))
      {
         printf("NON\n");
      }
      else
      {
         printf("OUI\n");
      }
   }
}
