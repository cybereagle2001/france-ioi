/** coded by cybereagle2001 */

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int x= input.nextInt();
      int y= input.nextInt();
      int z=0;
      for (int loop=0; loop<(x-y)+1; loop++){
         z=z+((x-loop)*(x-loop));
      }
      System.out.println(z);
   }
}
