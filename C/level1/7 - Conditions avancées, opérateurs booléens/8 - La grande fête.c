//coded by cybereagle2001
#include <stdio.h>

int main()
{ 
        int debut,fin,debut1,fin1;
        int nbInvite,nombre = 0,loop;
        scanf("%d",&debut);
        scanf("%d",&fin);
        scanf("%d",&nbInvite);
        for (loop =1; loop<= nbInvite;loop++)
        { 
                scanf("%d",&debut1);
                scanf("%d",&fin1);
                if( ((debut1 <=fin) && (fin1>= fin)) || ((debut1>= debut) && (fin1<= fin)) || ((debut1<= debut) && (fin1<=fin) && (fin1>= debut)) || ((debut1<= debut) && (fin1>= fin)) )
                { 
                        nombre++;
                }
        }
        printf("%d",nombre);
}

