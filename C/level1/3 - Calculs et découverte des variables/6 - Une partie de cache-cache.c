//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop =1, _max= nb; _loop<= _max;_loop++)

int main()
{
   repeat(100)
   {
      printf("%d\n", _loop);
   }
   printf("J'arrive !");
   return 0;
}
