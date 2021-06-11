//coded by cybereagle2001

#include <stdio.h>
#include <string.h>

int main()
{
   int nbDePersonne;
   char nom[100];
   char prenom[100];
   scanf("%d",&nbDePersonne);
   for (int loop=0; loop<nbDePersonne;loop++)
   {
      scanf("%s %s\n",prenom,nom);
      printf("%s %s\n",nom,prenom);
   }
   
}
