//coded by cybereagle2001
int main()
{
   int deb1,fin1,deb2,fin2;
   scanf("%d%d%d%d",&deb1,&fin1,&deb2,&fin2);
   if (((deb1>=deb2)&&(deb1<=fin2)) || ((fin1<=fin2)&&(fin1>= deb2)) || ((deb2>= deb1)&&(deb2<=deb1)) || ((fin2>= deb1)&&(fin2<= fin1)))
   {
      printf("Amis");
   }
   else 
      printf("Pas amis");
}
