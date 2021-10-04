//coded by cybereagle2001

#include <stdio.h>

void codeFaux(int motDePass)
{
    int mdpRentre =0;
    while (mdpRentre != motDePass)
    {
        printf("Entrez le code :\n");
        scanf("%d",&mdpRentre);
    }
    
}
int main()
{
    int motDePass = 4242;
    codeFaux(motDePass);
    printf("Encore une fois.\n");
    codeFaux(motDePass);
    printf("Bravo.");
}
