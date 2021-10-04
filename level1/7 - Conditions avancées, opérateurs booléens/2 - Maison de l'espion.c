//coded by cybereagle2001
#include <stdio.h>

int main()
{
   int abmin;
   int j=0;
   int i;
   int abmax;
   int ormin,ormax;
   scanf("%d%d%d%d",&abmin,&abmax,&ormin,&ormax);
   int home;
   scanf("%d",&home);
   int ab,or;
   for (i=1;i<= home;i++)
   {
      scanf("%d%d",&ab,&or);
      if ( ((ab>= abmin) && (ab<= abmax)) && (or>=ormin) && (or<= ormax) )
      {
         j=j+1;
      }
   }
   printf("%d",j);
}
