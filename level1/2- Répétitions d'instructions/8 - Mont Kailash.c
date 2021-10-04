//coded by cybereagle2001
#include <robot.h>
#include<stdio.h>
#define repeat(nb) for (int _loop= 1 , _max = nb ; _loop<= _max;_loop++)

int main()
{
   repeat(108)
   {
      repeat(13)
      {
          haut();
      }
      repeat(13)
      {
         droite();
      }
      repeat(13)
      {
         bas();
      }
      repeat(13)
      {
         gauche();
      }
   } 
}
