//coded by cybereagle2001

#include <stdio.h>
#include <string.h>

int main()
{
   int nbLignes,x;
   int nbDeMots;
   char mots[100];
   int T[101]={0};
   scanf("%d %d\n",&nbLignes,&nbDeMots);
   for (int loop=0;loop<nbLignes; loop++)
   {
      for (int j=0;j<nbDeMots;j++)
      {
         scanf("%s",mots);
         x=strlen(mots);
         T[x]=T[x]+1;
      }
   }
   for (int loop=0;loop<101;loop++)
   {
      if (T[loop]!=0)
      {
         printf("%d : %d\n",loop,T[loop]);
      }
   }
}
