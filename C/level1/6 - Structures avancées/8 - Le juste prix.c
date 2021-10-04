//coded by cybereagle2001
#include <stdio.h>

int main()
{ 
        int nbdemarchands;
        int positionmarchands=1;
        int prixmin=1000000;
        int marchandmoincher =1;  
        int prix,loop;
        scanf("%d",&nbdemarchands);
        for (loop =1; loop<= nbdemarchands; loop++)
        { 
                scanf("%d",&prix);
                if (prix<= prixmin)
                { 
                        marchandmoincher = positionmarchands;
                        prixmin=prix;
                }
                positionmarchands++;
        }
        printf("%d",marchandmoincher);
}

