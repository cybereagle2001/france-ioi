//coded by cybereagle2001

#include <stdio.h>
#include <string.h>

int main()
{
   char text[50];
   int loop,x;
   scanf("%[^\n]\n",text);
   x= strlen(text);
   for (loop=0;loop<x;loop++)
   {
      printf("%c\n",text[loop]);
   }
}
