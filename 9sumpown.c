#include<stdio.h>
#include<math.h>

int main(){

    int m,n,i,power,sum;

    printf("------------------------------------------Sum of integers to the power n------------------------------------------\n");

    printf("Enter Value of m:");
    scanf("%d",&m);

    printf("Enter Value of n:");
    scanf("%d",&n);

    sum=0;

    for(i=1;i<=m;i++){

        power=pow(i,n);

        sum=sum+power;


    }


    printf("Sum = %d",sum);


    return 0;
}
