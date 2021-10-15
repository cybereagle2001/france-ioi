/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int number= input.nextInt();
      int max=0,dist;
      for (int loop=0; loop<number; loop++){
         dist= input.nextInt();
         if (dist > max){
            max= dist;
         }
      }
      System.out.println(max);
   }
}
