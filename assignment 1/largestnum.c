#include<stdio.h>

int main(){

    int a,b,i,r;
    

    printf("--------------------Largest Number Calculator--------------------");

    printf("\nEnter First Number:");
    scanf("%d",&a);

    i=1;

    while(i==1){

        printf("\nEnter Other Number:");
        scanf("%d",&b);

        if(a<b){
            a=b;
        }
        else{

        }

        printf("\nWant to add another number to compare?");
        printf("\nEnter 1 for yes:");
        scanf("%d",&r);
        

        if(r==1){
            i=1;
        }
        else{
            i=0;
        }
    }

    printf("Largest Number = %d",a);
    return 0;
}
