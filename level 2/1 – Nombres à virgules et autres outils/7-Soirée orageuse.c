//coded by cybereagle2001

#include <stdio.h>
#include <math.h>
int main()
{
   double vitesseSon = 340.29;
   
   double tempsParcours;
   scanf("%lf", &tempsParcours);
   int distanceKilometres = (int)(round((tempsParcours * vitesseSon) / 1000));
   printf("%d", distanceKilometres);
   
   return 0;
}
