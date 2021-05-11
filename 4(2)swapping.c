#include <stdio.h>

int main(){

    int a,b;

    printf("------------------------------Swapping With Third Variable------------------------------\n");

    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;


    printf("Numbers Swapped: \nFirst Number = %d \nSecond Number = %d",a,b);

    return 0;
}
