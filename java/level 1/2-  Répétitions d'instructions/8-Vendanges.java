/** coded by cybereagle2001*/

import static algorea.Robot.*;

class Main{
   public static void main(String[] args){
      for (int loop=0; loop<20; loop++){
         ramasser();
         for (int loop1=0; loop1<15; loop1++){
            droite();
         }
         deposer();
         for (int loop2=0; loop2< 15; loop2++){
            gauche();
         }
      }
   }
}
