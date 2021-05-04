#include <stdio.h>

int main(){

    int a,b;

    printf("------------------------------Rational Operators------------------------------\n");

    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);

    printf("a<b : %d",a<b);
    printf("b<a : %d",b<a);
    printf("a<=b : %d",a<=b);
    printf("b<=a : %d",b<=a);
    printf("a==b : %d",a==b);
    printf("a!=b : %d",a!=b);



    return 0;
}
