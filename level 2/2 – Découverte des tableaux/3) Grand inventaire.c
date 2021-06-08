//coded by cybereagle2001
#include <stdio.h>

int main(){
  int T[10];
  int nbOperations,loop,numero_ing,operation;
   scanf("%d",&nbOperations);
   for (loop=0;loop<10;loop++){
      T[loop]=0;
   }
   for (loop=0;loop<nbOperations;loop++){
      scanf("%d",&numero_ing);
      scanf("%d",&operation);
      T[numero_ing-1]=T[numero_ing-1]+operation;
   }
   for (loop=0;loop<10;loop++){
      printf("%d\n",T[loop]);
   }
}
