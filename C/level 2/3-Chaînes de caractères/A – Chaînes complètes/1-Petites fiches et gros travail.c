//coded by cybereagle2001

#include <stdio.h>
#include <string.h>

int main()
{
   int loop;
   char book[200];
   char user[200];
   for (loop=-1;loop<5;loop++)
   {
      scanf("%[^\n]\n",user);
      scanf("%[^\n]\n",book);
      printf("%s\n",book);
      printf("%s\n",user);
   }
}
