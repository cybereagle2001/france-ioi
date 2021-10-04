/** coded by cybereagle2001*/

import static algorea.Robot.*;

class Main {
   public static void main(String[] args) {
      for (int loop=0; loop<2; loop++){
         gauche();
      }
      System.out.println("Bonjour, laissez-moi vous aider");
      ramasser();
      for (int loop=0; loop < 32; loop++){
         droite();
      }
      deposer();
   }
}
