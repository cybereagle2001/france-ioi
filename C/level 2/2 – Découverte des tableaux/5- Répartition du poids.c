//coded by cybereagle2001

#include <stdio.h>

int main(){
   int nbCharette,loop;
   double s=0.0;
   double m;
   scanf("%d",&nbCharette);
   double T[nbCharette];
   for (loop=0;loop<nbCharette;loop++){
      scanf("%lf",&T[loop]);
      s=s+T[loop];
   }
   m= s/nbCharette;
   for (loop=0;loop<nbCharette;loop++){
      printf("%lf\n",m-T[loop]);
   }
}
