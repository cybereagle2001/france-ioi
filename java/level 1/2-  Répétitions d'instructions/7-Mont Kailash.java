/** coded by cybereagle2001 */

import static algorea.Robot.*;

class Main{
   public static void main(String[] args){
      for (int loop=0; loop<108; loop++){
         for (int i=0; i<13; i++){
            haut();
         }
         for (int j=0; j<13;j++){
            droite();
         }
         for (int x=0; x<13;x++){
            bas();
         }
         for (int f=0; f<13; f++){
            gauche();
         }
      }
   }
}
