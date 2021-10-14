/**coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int x= input.nextInt();
      int y= input.nextInt();
      if (x-y<0){
         System.out.println(y-x);
      }
      else {
         System.out.println(x-y);
      }
   }
}
