/** coded by cybereagle2001 */

import static algorea.Robot.*;

class Main{
   public static void main(String[] args){
      for (int loop=1; loop<=10; loop++){
         for (int i=0; i< loop; i++){
            droite();
         }
         ramasser();
         for (int i=0;i<loop;i++){
            gauche();
         }
         deposer();
      }
   }
}    
