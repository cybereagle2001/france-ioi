/**coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int depart= input.nextInt();
      int largeur= input.nextInt();
      int nombre = input.nextInt();
      int dist= depart;
      for (int loop=0; loop<=nombre; loop++){ 
         System.out.println(dist);
         dist= dist+largeur;
      }
   }
}
