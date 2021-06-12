#include <stdio.h>
#include <string.h>
int main()
{
   char main1[53];
   char main2[53];
   scanf("%s %s",main1,main2);
   int long1 = strlen(main1);
   int long2 = strlen(main2);
   int tour = 0;
   while (tour < long1 && tour < long2 && main1[tour] == main2[tour])
      tour++;
   if (tour == long1 && tour == long2)
      printf("=");
   else if (tour == long2 || (tour < long1 && main1[tour] < main2[tour]))
      printf("1");
   else
      printf("2");
   printf("\n%d\n",tour);
   return 0;
}
