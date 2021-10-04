//coded by cybereagle2001
#include <stdio.h>

int main()
{
   int x;
   scanf("%d",&x);
   if ((x == 1)|| (x==2) || (x==3)|| (x==7)|| (x==8) || (x == 9))
   {
      printf("30");
   }
   else 
   {
      if (x== 11)
      {
         printf("29");
      }
      else 
      {
         if ( (x==10) || (x==6)|| (x==5)||(x==4))
         {
            printf("31");
         }
      }
   }
}
