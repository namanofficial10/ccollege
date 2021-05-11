#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,d,r1,r2;

    printf("------------------------------------------Roots of Quadratic Equation------------------------------------------\n");

    printf("Enter Coefficient of x^2 , x & constant term:");
    scanf("%f%f%f",&a,&b,&c);

    d=b*b-4*a*c;

    if(d<0){
        printf("No Real Roots Exists");
    }
    else{
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);

    printf("Discriminant: %f\n",d);
    printf("Roots are %f and %f",r1,r2);
    }

    return 0;
}
