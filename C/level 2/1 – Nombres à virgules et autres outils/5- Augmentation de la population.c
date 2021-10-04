//coded by cybereagle2001

#include <stdio.h>
#include <math.h>

int main(){
   int people;
   double pourcentage,somme;
   scanf("%d",&people);
   scanf("%lf",&pourcentage);
   somme=people+((people*pourcentage)/100);
   printf("%lf",floor(somme));
}
