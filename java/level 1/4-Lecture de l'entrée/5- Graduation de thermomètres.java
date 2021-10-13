/** coded by cybereagle2001*/

import algorea.Scanner;

class Main {
   static Scanner input = new Scanner(System.in);
   public static void main(String[] args) {
      int bas = input.nextInt();
      int top= input.nextInt();
      int dif= bas;
      for (int loop=1; loop<=top-bas+1; loop++){
         System.out.println(dif);
         dif++;
      }
   }
}
