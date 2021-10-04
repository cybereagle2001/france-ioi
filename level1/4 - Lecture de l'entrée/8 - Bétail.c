//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int totalKarvas = 0;
   repeat (20)
   {
      int nbBetes;
      scanf("%d", &nbBetes);
      totalKarvas = totalKarvas + nbBetes;
   }
   printf("%d\n", totalKarvas);
}
