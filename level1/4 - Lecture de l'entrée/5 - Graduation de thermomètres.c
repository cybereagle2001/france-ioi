//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int tempMin;
   int tempMax;
   scanf("%d", &tempMin);
   scanf("%d", &tempMax);
   int temperature = tempMin;
   repeat (tempMax - tempMin + 1)
   {
      printf("%d\n", temperature);
      temperature = temperature + 1;
   }
}
