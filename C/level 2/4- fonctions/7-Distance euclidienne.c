//coded by cybereagle2001

#include <stdio.h>
#include <math.h>

void distance(float x1, float x2, float y1, float y2)
{
   printf("%f",sqrt(pow(x1-x2,2)+pow(y1-y2,2)));   
}

int main()
{
   float x1,x2;
   float y1,y2;
   scanf("%f",&x1);
   scanf("%f",&y1);
   scanf("%f",&x2);
   scanf("%f",&y2);
   distance(x1,x2,y1,y2);
}
