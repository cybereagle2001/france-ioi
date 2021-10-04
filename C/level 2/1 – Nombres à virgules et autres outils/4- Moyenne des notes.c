//coded by cybereagle2001

#include <stdio.h>

int main(){
    int loop,number;
    double genral=0, notes;
    scanf("%d",&number);
    for (loop=1; loop<= number;loop++){
        scanf("%lf",&notes);
        genral+=notes;
    }
    printf("%lf",genral/number);
}
