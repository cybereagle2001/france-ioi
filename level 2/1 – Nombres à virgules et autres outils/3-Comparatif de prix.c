//coded by cybereagle2001

#include <stdio.h>

int main(){
    double number,loop,price,poids,old;
    scanf("%lf",&number);
    for (loop=0; loop<= number; loop++){
        scanf("%lf",&poids);
        scanf("%lf",&old);
        scanf("%lf",&price);
        printf("%lf\n",price/poids);
    }
}
