#include <stdio.h>

int main(){

    int a;

    printf("------------------------------Odd or Even------------------------------");

    printf("\nEnter Number:");
    scanf("%d",&a);

    if(a%2==0){
        printf("%d is even",a);
    }
    else{
        printf("%d is odd",a);
    }




    return 0;
}
