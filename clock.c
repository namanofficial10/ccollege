#include<stdio.h>
#include<stdlib.h>

#include<windows.h>
int main()
{
  int i,j,k;


  for(i=1;i<2;i++)
  {
   for(j=1;j<=2;j++)
   {
      for(k=1;k<=60;k++)
     {
      printf("h:m:s\n");
      printf("%d:%d:%d\n",i,j,k);
      Sleep(1000);
        system("cls");
     }
   }


  }

  return 0;
}
