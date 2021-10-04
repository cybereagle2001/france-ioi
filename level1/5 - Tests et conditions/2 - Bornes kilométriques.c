//coded by cybereagle2001
#include <stdio.h>

int main()
{
   int numeroMatin, numeroSoir;
   scanf("%d %d", &numeroMatin, &numeroSoir);
   int ecart = numeroSoir - numeroMatin;
   if (ecart < 0)
   {
      ecart = -ecart;
   }
   printf("%d\n", ecart);
}
