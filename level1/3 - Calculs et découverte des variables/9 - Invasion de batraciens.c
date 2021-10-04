//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop= 1, _max=nb; _loop<= _max ; _loop++)

int number = 1337;
int main()
{
   repeat(12)
   {
      number = number*2;
   }
   printf("%d\n", number);
   return 0;
}
