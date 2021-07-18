//coded by cybereagle2001

#include <stdio.h>

void suite(int entier)
{
   do
   {
      if (entier % 2 == 0)
      {
         printf("%d ",entier/2);
         entier= entier/2;
      }
      else
      {
         printf("%d ",(entier*3)+1);
         entier= entier*3+1;
      }
   }while(entier != 1);
}

int main()
{
   int entier;
   scanf("%d",&entier);
   suite(entier);
}
