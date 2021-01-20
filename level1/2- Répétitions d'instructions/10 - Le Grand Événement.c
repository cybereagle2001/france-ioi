//coded by cybereagle2001
#include <stdio.h>
#include <robot.h>
#define repeat(nb) for (int _loop= 1, _max= nb; _loop <= _max; _loop++)


int main()
{
   repeat (9)
   {
      haut();
   }
   repeat(9)
   {
      droite();
   }
   repeat(4)
   {
      bas();
      repeat(8)
      {
         gauche();
      }
      bas();
      repeat(8)
      {
         droite();
      }
   }
   bas();
   repeat(9)
   {
      gauche();
   }
}
