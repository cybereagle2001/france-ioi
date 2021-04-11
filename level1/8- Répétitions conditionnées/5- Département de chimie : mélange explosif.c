//coded by cybereagle2001

#include <stdio.h>

int main(){
    int number,min,max,x,j,loop=1,i=0;
    scanf("%d",&number);
    scanf("%d",&min);
    scanf("%d",&max);
    scanf("%d",&x);
    while((loop <= number-1) && (x <= max) && (x >= min)){
        scanf("%d",&x);
        loop++;
        i++;
    }
    if (i != number-1){
        for (j=1;j<= i;j++){
            printf("Rien à signaler\n");
        }
        printf("Alerte !!");
    }
    else if( i == 0){
       printf("Alerte !!");
    }
    else {
        for (j=0;j<=number-1;j++){
            printf("Rien à signaler\n");
        }
    }

}
