//coded by cybereagle2001

#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int nbParticiapnt,loop;
   scanf("%d",&nbParticiapnt);   
   int T[nbParticiapnt];
   for (loop=0;loop<nbParticiapnt;loop++)
   {
      scanf("%d",&T[loop]);
   }
   
   qsort(T,nbParticiapnt,sizeof(int),compare);
   
   for (loop=0;loop<nbParticiapnt/2;loop++)
   {
      printf("%d %d\n",T[loop],T[nbParticiapnt-1-loop]);
   }
}
