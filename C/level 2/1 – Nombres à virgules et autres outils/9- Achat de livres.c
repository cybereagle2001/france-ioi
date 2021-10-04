//coded by cybereagle2001

#include <stdio.h>
#include <math.h>

int main(){
    double money,book,result;
    int final;
    scanf("%lf",&money);
    scanf("%lf",&book);
    result= money/book;
    final= (int)floor(result);
    printf("%d",final);
}
