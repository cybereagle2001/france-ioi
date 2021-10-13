/**coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int x;
      int j=0;
      for (int loop=0; loop<20; loop++){
         x= input.nextInt();
         j= j+x;
      }
      System.out.println(j);
   }
}
