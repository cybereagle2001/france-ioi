//coded by cybereagle2001
#include <stdio.h>

int main()
{
   int age;
   int poids;
   int price;
   scanf("%d%d",&age,&poids);
   if (age == 60)
   {
      price=0;
      printf("%d",price);
   }
   else
   {
      if ( age < 10)
      {
         price = 5;
         printf("%d",price);
      }
      else 
      {
         if (poids >=20)
         {
            price = 30+10;
            printf("%d",price);
         }
         else
         {
            price= 30;
            printf("%d",price);
         }
      }
   }
}
