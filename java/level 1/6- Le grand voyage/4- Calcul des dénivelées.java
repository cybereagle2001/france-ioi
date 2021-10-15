/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int number= input.nextInt();
      int change,i=0,j=0;
      for (int loop=0; loop<number; loop++){
         change= input.nextInt();
         if (change < 0){
            j=j+change;
         }
         else if (change > 0){
            i=i+change;
         }
      }
      System.out.println(i);
      System.out.println(-j);
   }
}
