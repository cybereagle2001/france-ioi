/** coded by cybereagle2001*/

import static algorea.Robot.*;

class Main{
   public static void main(String[] args){
      for (int loop=0; loop<9; loop++){
         haut();
      }
      for (int loop1=0; loop1<9; loop1++){
         droite();
      }
      for (int i=0; i<4; i++){
         bas();
         for (int loop2=0; loop2<8; loop2++){
            gauche();
         }
         bas();
         for (int loop2=0; loop2<8; loop2++){
            droite();
         }
      }
      bas();
      for (int loop3=0; loop3<=8; loop3++){
         gauche();
      }
   }
}
