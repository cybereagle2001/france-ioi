/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int age= input.nextInt();
      if (age <21 ){
         System.out.println("Tarif réduit");
      }
      else{
         System.out.println("Tarif plein");
      }
   }
}
