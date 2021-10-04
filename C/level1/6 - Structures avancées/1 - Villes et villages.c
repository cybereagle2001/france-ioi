//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop=1, _max=nb; _loop<= _max; _loop++)

int main()
{
   int x;
   int i=0;
   scanf("%d",&x);
   repeat(x)
   {
      int f;
      scanf("%d",&f);
      if (f > 10000){
         i=i+1;
      }
   }
   printf("%d",i);
}
