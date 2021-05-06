#include<stdio.h>

int main(){

    int a,b;
     char n;

    printf("--------------------Largest Number Calculator--------------------");

    printf("\nEnter First Number:");
    scanf("%d",&a);

    n='y';

    while(n=='y' || n=='Y'){

        printf("\nEnter Other Number:");
        scanf("%d",&b);

        if(a<b){
            a=b;
        }
        else{

        }

        printf("\nWant to add another number to compare?");
        printf("\nEnter y for yes:");
        scanf("%s",&n);
        //printf("r=%c",r);



    }

    printf("Largest Number = %d",a);
    return 0;
}
