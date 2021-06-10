//coded  by cybereagle2001

#include <stdio.h>

int main()
{
   int nbEmplaecemnt,loop,j;
   scanf("%d",&nbEmplaecemnt);
   int T[nbEmplaecemnt];
   for (loop=0;loop<nbEmplaecemnt;loop++){
      scanf("%d",&T[loop]);
   }
   for (loop =0; loop<nbEmplaecemnt;loop++)
   {
      for (j=0;j<nbEmplaecemnt;j++){
         if (loop== T[j]){
            printf("%d\n",j);
         }
      }
   }
}
