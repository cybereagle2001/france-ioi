//coded by cybereagle2001

#include <stdio.h>
void affiche(int length)
{
   for (int loop=0; loop< length;loop++)
   {
      printf("X");
   }
   printf("\n");
   for (int loop=0; loop< length;loop++)
   {
      printf("#");
   }
   printf("\n");
   for (int loop=0; loop< length;loop++)
   {
      printf("i");
   }   
}

int main()
{
   int length;
   scanf("%d",&length);
   affiche(length);
}
