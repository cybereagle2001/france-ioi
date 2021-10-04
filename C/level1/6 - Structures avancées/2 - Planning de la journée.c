//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop=1,_max= nb; _loop<= _max; _loop++)

int main()
{
   int x;
   int i=0;
   int nbDeVillage;
   int Distance;
   
   scanf("%d",&x);
   scanf("%d",&nbDeVillage);
   
   repeat(nbDeVillage)
   {
      scanf("%d",&Distance);
      int ecart;
      ecart = x- Distance;
      if (ecart<0)
      {
         ecart = -ecart;
      }
      if (ecart <= 50)
      {
         i=i+1;
      }
   }
   printf("%d",i);
}
