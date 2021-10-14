/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int x= input.nextInt();
      int y= input.nextInt();
      
      if (x+y>=10){
         System.out.println("Taxe spéciale !");
         System.out.println(36);
      }
      else{
         System.out.println("Taxe régulière");
         System.out.println((x+y)*2);
      }
   }
}
