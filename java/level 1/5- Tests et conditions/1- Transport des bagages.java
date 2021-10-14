/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int nbPaquet= input.nextInt();
      int poids= input.nextInt();
      int j=nbPaquet*poids;
      if (j> 105 ){
         System.out.println("Surcharge !");
      }
   } 
}
