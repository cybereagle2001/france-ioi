//coded by cybereagle2001
#include <stdio.h>
int min2(int val1, int val2)
{
   if (val1 < val2)
      return val1;
   return val2;
}
int main()
{
   int valMin;
   scanf("%d", &valMin);
   
   for (int iVal = 1; iVal < 10; iVal = iVal + 1)
   {
      int valeur;
      scanf("%d", &valeur);
      valMin = min2(valMin, valeur);
   }
   printf("%d\n", valMin);
}
