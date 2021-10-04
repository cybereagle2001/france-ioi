//coded by cybereagle2001

#include <stdio.h>
#include <string.h>

int main()
{
   char personne1[50];
   char personne2[50];
   scanf("%s",personne1);
   scanf("%s",personne2);
   if (strcmp(personne1,personne2)>0)
   {
      printf("%s",personne2);
   }
   else if (strcmp(personne1,personne2)<0)
   {
      printf("%s",personne1);
   }
}
