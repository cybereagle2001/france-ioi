//coded by cybereagle2001

#include <stdio.h>
#include <string.h>

int main()
{
   int result=0,nbDeLigne,x;
   char inp;
   char text[1001];
   scanf("%c\n",&inp);
   scanf("%d\n",&nbDeLigne);
   for (int loop=0; loop<nbDeLigne; loop++)
   {
      scanf("%[^\n]\n",text);
      x=strlen(text);
      for (int j=0; j< x;j++)
      {
         if (text[j]== inp)
         {
            result++;
         }
      }
   }
   printf("%d",result);
}
