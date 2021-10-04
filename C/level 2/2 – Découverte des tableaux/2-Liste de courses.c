//coded by cybereagle2001

#include <stdio.h>

int main(){
   int tab[]={9,5,12,15,7,42,13,10,1,20};
   int s=0,loop,x;
   for(loop=0;loop<= 9;loop++){
      scanf("%d",&x);
      s= s+ (tab[loop]*x);
   }
   printf("%d",s);
}
