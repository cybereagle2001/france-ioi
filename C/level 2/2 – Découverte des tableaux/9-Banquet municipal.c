//coded by cybereagle2001

#include <stdio.h>

int main()
{
   int nbPosition,pos1,pos2;
   scanf("%d",&nbPosition);
   int T[nbPosition];
   int nbChangement,loop;
   scanf("%d",&nbChangement);
   for (loop=0;loop<nbPosition;loop++)
   {
      scanf("%d",&T[loop]);
   }
   for (loop=0;loop<nbChangement;loop++)
   {
      int Z;
      scanf("%d",&pos1);
      scanf("%d",&pos2);
      Z=T[pos2];
      T[pos2]=T[pos1];
      T[pos1]=Z;
   }
   for (loop=0;loop<nbPosition;loop++)
   {
      printf("%d\n",T[loop]);
   }
}
