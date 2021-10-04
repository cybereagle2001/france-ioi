//coded by cybereagle2001
#include <stdio.h>
#include <robot.h>

int nb=0;
int main()
{

   for (int _loop=1 ,_max=10;_loop<= _max;_loop++)
   {
      nb = nb+1;
      for (int _loop1= 1,_max1=nb;_loop1<= _max1;_loop1++)
      {
         droite();
      }
      ramasser();
      for (int _loop1= 1,_max1=nb;_loop1<= _max1;_loop1++)
      {
         gauche();
      }
      deposer();
   }
   return 0;
}
