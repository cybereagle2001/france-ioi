/** coded by cybereagle2001*/
import algorea.Scanner;
class Main
{
public static void main(String[] args)
{
  Scanner entrée = new Scanner(System.in);
  int hauteur = entrée.nextInt();
  int nbFolioles = entrée.nextInt();
  if(hauteur < 9)
  {
     if(nbFolioles > 6)
     {
        System.out.println("Tinuviel");
     }
     else
     {
        System.out.println("Falarion");
     }
  }
  else
  {
     if(nbFolioles < 8)
     {
        System.out.println("Dorthonion");
     }
     else
     {
        System.out.println("Calaelen");
     }
  }
}
}
