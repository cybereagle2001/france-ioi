//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop=1 , _max=nb;_loop<= _max;_loop++)

int main()
{
   int line=1;
   repeat(20)
   {
      int row=1;
      repeat(20)
      {
         printf("%d ",row*line);
         row+=1;
      }
      printf("\n");
      line+=1;
   }
   return 0;
}
