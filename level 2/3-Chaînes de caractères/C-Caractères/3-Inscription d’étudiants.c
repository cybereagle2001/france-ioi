//coded by cybereagle2001

#include <stdio.h>

int main()
{
   char nom[51];
   scanf("%s\n",nom);
   if (nom[0]<='F')
   {
      printf("1");
   }
   else if (nom[0]<='P')
   {
      printf("2");
   }
   else 
   {
      printf("3");
   }
}
