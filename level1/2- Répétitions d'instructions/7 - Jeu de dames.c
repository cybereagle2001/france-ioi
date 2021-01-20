// coded by cybereagle2001
#define repeat(nb) for (int _loop=1, _max=nb; _loop <= _max; _loop++)

int main()
{
   repeat(10)
   {
      repeat(10)
      {
         printf("OXOX");
      }
      printf("\n");
      repeat(10)
      {
         printf("XOXO");
      }
      printf("\n");   
      repeat(10)
      {
         printf("OXOX");
      }
      printf("\n");

      repeat(10)
      {
         printf("XOXO");
      }
      printf("\n");
   }
}
