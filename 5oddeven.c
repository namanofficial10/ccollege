#include <stdio.h>

int main(){

    int a;

    printf("------------------------------Odd or Even------------------------------");

    printf("\nEnter Number:");
    scanf("%d",&a);

    printf("Even: %d",a%2==0);
    printf("\nOdd: %d",a%2!=0);


    return 0;
}
