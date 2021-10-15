/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int age= input.nextInt();
      int poids= input.nextInt();
      if (age == 60){
         System.out.println(0);
      }
      else if (age < 10){
         System.out.println(5);
      }
      else{
         if (poids >= 20){
            System.out.println(40);
         }
         else{
            System.out.println(30);
         }
      }
   }
}
