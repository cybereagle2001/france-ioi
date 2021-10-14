/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input = new Scanner(System.in);
   public static void main(String[] args){
      int  nbMembres = input.nextInt();
      int team1=0;
      int team2=0;
      int j=0; int y=0;
      for (int loop=0; loop<nbMembres; loop++){
         int poids= input.nextInt();
         int poids2= input.nextInt();
         j=j+poids;
         y=y+poids2;
      }
      if (j>y){
         System.out.println("L'équipe 1 a un avantage");
      }
      else if(y>j){
         System.out.println("L'équipe 2 a un avantage");
      }
      System.out.println("Poids total pour l'équipe 1 : "+j);
      System.out.println("Poids total pour l'équipe 2 : "+y);
   }
}
