#include<stdio.h>

int main(){

    int num,rev=0,a,b;

    printf("--------------------------------Palindrome Number--------------------------------\n");

    printf("Enter Number:");
    scanf("%d",&num);

    b=num;

    do{
        a=num%10;
        rev=rev*10+a;
        num=num/10;

    }while(num>0);


    printf("\n");

    if(b==rev){

        printf("%d is Palindrome",b);

    }
    else{

        printf("%d is not Palindrome",b);

    }


    return 0;
}
