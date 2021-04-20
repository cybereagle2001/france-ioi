//coded by cybereagle2001

#include <stdio.h>
#include <math.h>

int main(){
    double tax,Ntax,price,price1;
    double pricefinal;
    scanf("%lf",&tax);
    scanf("%lf",&Ntax);
    scanf("%lf",&price);
    price1 = price /(1+(tax/100));
    pricefinal = price1+(price1*(Ntax/100));
    printf("%.2lf",pricefinal);
}
