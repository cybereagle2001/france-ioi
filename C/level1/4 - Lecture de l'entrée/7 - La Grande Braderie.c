//coded by cybereagle2001
#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int positionDepart;
   int largeurEmplacement;
   int nbVendeurs;
   scanf("%d", &positionDepart);
   scanf("%d", &largeurEmplacement);
   scanf("%d", &nbVendeurs);
 
   int position = positionDepart;
   repeat (nbVendeurs + 1)
   {
      printf("%d\n", position);
      position = position + largeurEmplacement;
   }
}
