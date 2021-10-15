/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int pos= input.nextInt();
      int vill,ecar,j=0,number= input.nextInt();
      for (int loop=0; loop<number; loop++){
         vill= input.nextInt();
         ecar = pos - vill;
         if (ecar<0){
            ecar= -ecar;
         }
         if (ecar<=50){
            j++;
         }
      }
      System.out.println(j);
   }
}
