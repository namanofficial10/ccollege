#include <stdio.h>

int main(){

    int a,i;

    printf("------------------------------Tables------------------------------");

    printf("\nEnter Number:");
    scanf("%d",&a);

    while(i<10){

        printf("%d x %d = %d\n",a,i+1,a*(i+1));

        i++;
    }


    return 0;
}
