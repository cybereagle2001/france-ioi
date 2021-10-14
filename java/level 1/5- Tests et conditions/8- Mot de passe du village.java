/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in); 
   public static void main(String[] args){
      int secret_code= input.nextInt();
      if (secret_code == 64741){
         System.out.println("Bon festin !");
      }
      else{
         System.out.println("Allez-vous en !");
      }
   }
}
