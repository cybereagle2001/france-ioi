//coded by cybereagle2001

#include <stdio.h>

int main()
{
   int somme=0;
   int x;
   scanf("%d",&x);
   while(x != -1)
   {
      somme = somme +x;
      scanf("%d",&x);
   }
   printf("%d",somme);
}
