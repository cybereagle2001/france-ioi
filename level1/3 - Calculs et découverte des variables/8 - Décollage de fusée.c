// coded by cybereagle2001

#include <stdio.h>
#define repeat(nb) for (int _loop=0 ,_max =nb; _loop<= _max; _loop++)

int max=100;
int nub=100;
int main()
{
   printf("%d\n",nub);
   repeat(99)
   {
      max = max-1;
      printf("%d\n",max);
   }
   printf("Décollage !");
   return 0;
}
