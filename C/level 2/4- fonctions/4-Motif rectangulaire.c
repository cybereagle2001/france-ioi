//coded by cybereagle2001

#include <stdio.h>

void affiche(int ligne, int colone, int moti)
{
   for (int loop=0; loop < ligne; loop++ )
   {
      for (int j=0; j< colone;j++)
      {
         printf("%c",moti);
      }
      printf("\n");
   }
}
int main()
{
   int colone,ligne;
   char moti;
   scanf("%d\n",&ligne);
   scanf("%d\n",&colone);
   scanf("%c\n",&moti);
   affiche(ligne,colone,moti);
}
