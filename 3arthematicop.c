#include<stdio.h>

int main()
{

    int c,d,e;
    float a,b,f;

    printf("------------------------------Operators------------------------------\n");

    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;

    printf("\nSum=%d",c);
    printf("\nSubtraction=%d",d);
    printf("\nMultiplication=%d",e);
    printf("\nDivision=%f",f);
    return 0;
}
