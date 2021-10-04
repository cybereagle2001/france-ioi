//coded by cybereagle2001

#include <stdio.h>

int main(){
   int nbDePersonne,nbDeFruit;
   scanf("%d",&nbDePersonne);
   scanf("%d",&nbDeFruit);
   if (nbDeFruit%nbDePersonne == 0){
      printf("oui");
   }
   else{
      printf("non");
   }
}
