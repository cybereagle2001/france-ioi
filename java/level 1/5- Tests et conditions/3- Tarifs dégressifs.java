/**coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int HA= input.nextInt();
      int tarif=10+ HA*5;
      if (tarif >53){
         System.out.println(53);
      }
      else{
         System.out.println(tarif);
      }
   }
}
