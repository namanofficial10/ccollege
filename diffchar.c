#include<stdio.h>

int main(){

    char a;

    printf("Enter Character:");
    scanf("%c",&a);

    if(a>=65 && a<=90){

        printf("%c is a UpperCase Alphabet",a);

    }
    else if(a>=97 && a<=122){

        printf("%c is a LowerCase Alphabet",a);

    }
    else if(a>=48 && a<=57){

        printf("%c is a Number",a);

    }
    else{
        printf("%c is a Special Character",a);
    }


    return 0;
}
