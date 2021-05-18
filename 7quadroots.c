#include<stdio.h>
#include<math.h>


int main(){

    float a,b,c,d,r1,r2,r,z1real,z1img,z2real,z2img;


    printf("------------------------------------------Roots of Quadratic Equation------------------------------------------\n");

    printf("Enter Coefficient of x^2:");
    scanf("%f",&a);

    printf("Enter Coefficient of x:");
    scanf("%f",&b);

    printf("Enter constant term:");
    scanf("%f",&c);

    d=b*b-4*a*c;

    if(d<0){

        printf("\nNo Real Roots Exists\n");

        r=-d;

        z1real=-b/2;
        z1img=sqrt(r)/2;

        z2real=-b/2;
        z2img=-sqrt(r)/2;

        printf("Imaginary Roots are:\n");
        printf("z1 = %.1f + %.1fi \n",z1real, z1img);
        printf("z2 = %.1f + %.1fi \n",z2real, z2img);

    }
    else{
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);


    printf("\nRoots are %f and %f",r1,r2);
    }

    return 0;
}
