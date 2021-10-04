//coded by cybereagle2001
#include <stdio.h>

int main()
{
   int age;
   scanf("%d", &age);
   
   if (age < 21)
   {
      printf("Tarif réduit");
   }
   else
   {
      printf("Tarif plein");
   }
}
