//coded by cybereagle2001

#include <stdio.h>

int main()
{  
   int nbToFind;
   int try, i=0;
   scanf("%d",&nbToFind);
   scanf("%d",&try);
   while(try != nbToFind)
   {
      i= i +1;
      if (try > nbToFind)
      {
         printf("c'est moins\n");
      }
      else
      {
         if (try < nbToFind)
         {
            printf("c'est plus\n");
         }
      }
      scanf("%d",&try);
   }
   printf("Nombre d'essais nécessaires :\n%d",i+1);
}
