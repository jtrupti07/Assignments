#include<stdio.h>

void DisplayASCII()
{
   for(int i=0;i<=255;i++)
   {
      printf("%d\t%o\t%x\n",i,i,i);
   }

}



int main()
{
 DisplayASCII();
   return 0;
}

