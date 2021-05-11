#include <stdio.h>

int main(){

    int a,b,c;

    printf("------------------------------Three Numbers Comparision------------------------------\n");

    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    printf("Enter Third Number:");
    scanf("%d",&c);


    if(a>b){
        if(a>c){
            printf("Largest Number is %d",a);
        }
        else{
            printf("Largest Number is %d",c);
        }
    }
    else{
        if(b>c){
            printf("Largest Number is %d",b);
        }
        else{
            printf("Largest Number is %d",c);
        }
    }




    return 0;
}
