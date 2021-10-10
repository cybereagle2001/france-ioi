/** coded by cybereagle2001*/

class Main{
   public static void main(String[] args){
      int number=0,new_number;
      for (int loop=1; loop<18; loop=loop+2){
         new_number= loop*loop*loop;
         number = number + new_number; 
      }
      System.out.print(number);
   }
}
