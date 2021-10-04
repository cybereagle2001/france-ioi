//coded by cybereagle2001

#include <stdio.h>
#include <math.h>

int main(){
    double ciment;
    int price;
    scanf("%lf",&ciment);
    price=(ceil(ciment/60))*45;
    printf("%d",price);
}
