#include<stdio.h>
#include<stdlib.h>

#include<windows.h>
int main()
{
  int i,j,k;

while(i=1){
  for(i=0;i<24;i++)
  {
   for(j=0;j<60;j++)
   {
      for(k=0;k<60;k++)
     {
      printf("\th:m:s\n");
      printf("\t%d:%d:%d\n",i,j,k);
      Sleep(1000);
        system("cls");
     }
   }


  }
i==1;

}
  return 0;
}
