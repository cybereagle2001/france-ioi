/** coded by cybereagle2001 */
import static algorea.Robot.*;

class Main{
   public static void main(String[] args){
      for (int loop=0; loop <21; loop++){
         haut();
         droite();
      }
      for (int loop=0; loop < 21; loop++){
         gauche();
         bas();
      }
   }
}
