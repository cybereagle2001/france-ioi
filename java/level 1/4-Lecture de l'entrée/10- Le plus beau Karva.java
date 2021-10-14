/** coded by cybereagle2001*/

import algorea.Scanner;

class Main{
   static Scanner input= new Scanner(System.in);
   public static void main(String[] args){
      int number=input.nextInt();
      for (int loop=0; loop<number; loop++){
         int poids=input.nextInt();
         int age=input.nextInt();
         int corne=input.nextInt();
         int longeur=input.nextInt();
         int result= corne*longeur+poids;
         System.out.println(result);
      }
   }
}
