//coded by cybereagle2001
#include <stdio.h>

int x= 1;
int y= 0;
int main()
{

   for (int _loop=1 , _max= 9;_loop<= _max;_loop++)
   {
      y= y+(x*x*x);
      x= x+2;
      
   }
   printf("%d",y);
}
