//coded by cybereagle2001
#include <stdio.h>

void code_verif(int codeSecret)
{
   int false_coder;
   do
   {
      printf("Entrez le code :\n");
      scanf("%d", &false_coder);
   }
   while (tentative != codeSecret);
}
int main()
{
   code_verif(4242);
   printf("Premier code bon.\n");
   code_verif(2121);
   printf("Bravo.\n");
}
