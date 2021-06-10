//coded by cybereagle2001
#include <stdio.h>
#include <stdlib.h>
 
int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
 
int main()
{
   int nbPersonnes;
   scanf("%d\n",&nbPersonnes);
   int fortune[nbPersonnes];
   for (int idPersonne = 0; idPersonne < nbPersonnes; idPersonne = idPersonne + 1)
   {
      scanf("%d\n",&fortune[idPersonne]);
   }
     
   qsort( fortune, nbPersonnes, sizeof(int), compare );
     
   if ((nbPersonnes % 2) == 1)
   {
      int milieu = (nbPersonnes - 1) / 2;
      printf("%d\n", fortune[milieu] );
   }
   else
   {
      int milieu = nbPersonnes / 2;
      printf("%.1lf\n", (double)( fortune[milieu - 1] + fortune[milieu] ) / 2 );
   }
}
