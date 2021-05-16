#include<stdio.h>

int term=1,fterm=0,b,c;
int fibonacci(int a);

int main()
{
    int n;

    printf("Enter No. of terms :");
    scanf("%d",&n);
    system("cls");
    printf("The Fibonacci series of %d terms is :\n",n);
    fibonacci(n);

    return 0;
}

int fibonacci(int a){


        if(a!=0){

        b=term;
        printf("%d\t",fterm);
        term=term+fterm;
        fterm=b;
        c=a-1;
        fibonacci(c);

        }
    return 0;
}
