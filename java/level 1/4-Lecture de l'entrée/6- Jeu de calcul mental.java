/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int nbNombre= input.nextInt();
      int x= 66;
      for (int loop=1; loop<=nbNombre; loop++){
         x= x*loop;
         System.out.println(x);
      }
   }
}
