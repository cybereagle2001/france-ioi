//coded by cybereagle2001
# include <stdio.h>

int main()
{
   int hauteur;
   int nbDeFolioles;
   scanf("%d%d",&hauteur,&nbDeFolioles);
   if ((hauteur<=5) && (nbDeFolioles>=8))
   {
      printf("Tinuviel");
   }
   else
   {
      if ((hauteur>=10) && (nbDeFolioles>=10))
      {
         printf("Calaelen");
      }
      else
      {
         if((hauteur<=8) && (nbDeFolioles<=5))
         {
            printf("Falarion");
         }
         else 
         {
            if((hauteur>=12) && (nbDeFolioles<=7))
            {
               printf("Dorthonion");
            }
         }
      }
   }
}
