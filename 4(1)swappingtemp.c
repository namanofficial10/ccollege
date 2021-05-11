#include <stdio.h>

int main(){

    int a,b,temp;

    printf("------------------------------Swapping With Third Variable------------------------------\n");

    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("Numbers Swapped: \nFirst Number = %d \nSecond Number = %d",a,b);

    return 0;
}
