//coded by cybereagle2001
# include <stdio.h>
# include <stdbool.h>

int main()
{
        int  numDisparu,number,entier,loop;
        bool partie= false;
        scanf("%d",&numDisparu);
        scanf("%d",&number);
        for (loop = 1; loop<= number;loop++)
        {
                scanf("%d",&entier);
                if (entier == numDisparu)
                {
                        partie=true;
                }
        }
        if (partie == true )
        {
                printf("Sorti de la ville");
        }
        else 
        {
                printf("Encore dans la ville");
        }
}
