//coded by cybereagle2001
#include <stdio.h>
int main()
{
   int nbJetons,loop;
   scanf("%d", &nbJetons);
   for (loop=0; loop<nbJetons;loop++)
   {
      int x, y;
      scanf("%d%d", &x, &y);
      if (x < 0 || x > 90 || y < 0 || y > 70)
      {
         printf("En dehors de la feuille\n");
      }
      else if (y > 60 && ((x > 15 && x < 45) || (x > 60 && x < 85)))
      {
         printf("Dans une zone rouge\n");
      }
      else if (x > 10 && x < 85 && y > 10 && y < 55 && !(x > 25 && x < 50 && y > 20 && y < 45))
      {
         printf("Dans une zone bleue\n");
      }
      else
      {
         printf("Dans une zone jaune\n");
      }
   }
}
