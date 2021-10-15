/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int number=0;
      int nbH;
      int nblieux= input.nextInt();
      for (int loop=0; loop<nblieux; loop++){
         nbH= input.nextInt();
         if (nbH > 10000){
            number++;
         }
      }
      System.out.println(number);
   }
}
