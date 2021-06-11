//coded by cybereagle2001
#include <stdio.h>
#include <string.h>
int main()
{
   int nbLivres, longueurMinimale;
   char titre[1001], resume[1001];
   scanf("%d", &nbLivres);
   scanf("%d\n", &longueurMinimale);
   for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
   {
      scanf("%[^\n]\n", titre);
      scanf("%[^\n]\n", resume);
      if (strlen(resume) < longueurMinimale)
      {
         printf("%s\n", titre);
      }
   }
}
