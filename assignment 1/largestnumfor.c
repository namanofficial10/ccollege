#include<stdio.h>

int main(){

    int a,b,n,i;

    printf("--------------------Largest Number Calculator Using For Loop--------------------");

    printf("\nEnter value of n:");
    scanf("%d",&n);


    printf("\nEnter First Number:");
    scanf("%d",&a);



    for(i=1;i<n;i++){

        printf("\nEnter Other Number:");
        scanf("%d",&b);

        if(a<b){
            a=b;
        }
        else{
            a=a;
        }


    }

    printf("Largest Number = %d",a);
    return 0;
}
