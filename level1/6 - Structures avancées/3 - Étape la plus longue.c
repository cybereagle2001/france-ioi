//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop=1, _max=nb; _loop<= _max;_loop++)

int main()
{
   int nbDeJours;
   int max1=0;
   scanf("%d",&nbDeJours);
   repeat(nbDeJours)
   {
      int distance;
      scanf("%d",&distance);
      if (distance> max1)
      {
         max1= distance;
      }
   }
   printf("%d",max1);
}
