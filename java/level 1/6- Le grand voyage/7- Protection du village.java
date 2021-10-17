/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int nombre_maison= input.nextInt();
      int x,y;
      int minx=1000*1000,miny=1000*1000,maxx=0,maxy=0;
      for (int loop=0; loop< nombre_maison; loop++){
         x= input.nextInt();
         y= input.nextInt();
         if (x < minx){
            minx= x;
         }
         if (x> maxx){
            maxx=x;
         }
         if(y < miny){
            miny=y;
         }
         if (y> maxy){
            maxy= y;
         }
      }
      int largeur= maxx-minx, hauteur= maxy-miny;
      System.out.println( (largeur+hauteur)*2 );
   }
}
