/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int val1= input.nextInt();
      int val2= input.nextInt();
      if (val2-val1>10){
         System.out.println("La famille Evaran a un champ trop grand");
      }
      else if (val1- val2>10){
         System.out.println("La famille Arignon a un champ trop grand");
      }
   }
}
