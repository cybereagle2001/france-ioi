#include <stdio.h>
int main()
{
  int nbZones;
  scanf("%d", &nbZones);
  printf("%d", ((nbZones % 24) + 24 ) % 24);
}
