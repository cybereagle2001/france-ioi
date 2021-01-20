//coded by cybereagle2001
#include <stdio.h>

int main()
{
   int premierDe, secondDe;
   scanf("%d %d", &premierDe, &secondDe);
   
   int somme = premierDe + secondDe;
   if (somme >= 10)
   {
      printf("Taxe spéciale !\n");
      printf("%d\n", 36);
   }
   else
   {
      printf("Taxe régulière\n");
      printf("%d\n", 2 * somme);
   }
}
