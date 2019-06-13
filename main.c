
#include <stdio.h>
#include <stdbool.h>



bool ShowBin(char a, int n)
{
    bool ret;
    a = a << n;
    if (a & 0x80)
    {
        ret=1;
    }
    else
    {
        ret=0;
    }
    return (ret);
}

int main()
{
      bool a;
      char b;
      int num;
      printf("%-20s", "Vvedi char  \n");
      scanf("%c", &b);
      printf("%-20s", "Kakoy bit?  \n");
      scanf("%d", &num);
      if ((num >= 0) && (num <= 7))
      {
          a = ShowBin(b, num);
          printf ("%hu",a);
      }
      else 
      {
          printf ("Takogo bita net");
      }
      
      return 0;
}