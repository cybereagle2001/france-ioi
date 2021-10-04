//coded by cybereagle2001
#include <stdio.h>

int main()
{
   int nbPaquets, poidsPaquet;
   scanf("%d %d", &nbPaquets, &poidsPaquet);
   
   if (nbPaquets * poidsPaquet > 105)
   {
      printf("Surcharge !\n");
   }
}
