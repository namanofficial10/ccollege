#include <stdio.h>

int main(){

    int num,factorial,i;

    printf("------------------------------Factorial Calculator------------------------------");

    printf("\n\nEnter Number:");
    scanf("%d",&num);

    factorial=1;

    i=1;

    while(i<=num){

        factorial=factorial*i;

    i++;
    }

    printf("\nFactorial = %d",factorial);


    return 0;
}
