//coded by cybereagle2001
#include <stdio.h>
int main()
{
   int dateDeb;
   int dateFin;
   int nbDeEnt;
   int loop=0;
   int i;
   int intro;
   scanf("%d%d", &dateDeb,&dateFin);
   scanf("%d",&nbDeEnt);
   for (i=1;i<= nbDeEnt;i++)
   {
      scanf("%d",&intro);
      if ((intro >= dateDeb) && (intro <= dateFin))
      {
         loop=loop+1;
      }
   }
   printf("%d",loop);
}
