//coded by cybereagle2001
#include <stdio.h>

int main()
{
   int superficieArignon, superficieEvaran;
   scanf("%d %d", &superficieArignon, &superficieEvaran);
   if (superficieArignon > superficieEvaran + 10)
   {
      printf("La famille Arignon a un champ trop grand\n");
   }
   if (superficieEvaran > superficieArignon + 10)
   {
      printf("La famille Evaran a un champ trop grand\n");
   }
}
