#include <stdio.h>
void ligne(int longueur, char motif)
{
   for (int iCol = 1; iCol <= longueur; iCol = iCol + 1)
   {
      printf("%c", motif);
   }
   printf("\n");
}
void ligneCreuse(int longueur, char motif)
{
   if (longueur > 1)
   {
      printf("%c", motif);
      for (int iCol = 2; iCol < longueur; iCol = iCol + 1)
      {
         printf(" ");
      }
   }
   printf("%c\n", motif);
}
void rectangle(int hauteur, int longueur, char motif)
{
   if (hauteur > 1)
   {
      ligne(longueur, motif);
      for (int iLigne = 2; iLigne < hauteur; iLigne = iLigne + 1)
      {
         ligneCreuse(longueur, motif);
      }
   }
   ligne(longueur, motif);
}
void triangle(int hauteur, char motif)
{
   for (int iLigne = 1; iLigne < hauteur; iLigne = iLigne + 1)
   {
      ligneCreuse(iLigne, motif);
   }
   ligne(hauteur, motif);
}
int main()
{
   int longueurLigne;
   scanf("%d", &longueurLigne);
   ligne(longueurLigne, 'X');
   printf("\n");
   int hauteurRectangle, largeurRectangle;
   scanf("%d%d", &hauteurRectangle, &largeurRectangle);
   rectangle(hauteurRectangle, largeurRectangle, '#');
   printf("\n");
   int hauteurTriangle;
   scanf("%d", &hauteurTriangle);
   triangle(hauteurTriangle, '@');
}
