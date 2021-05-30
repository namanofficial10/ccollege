#include<stdio.h>

int main(){

    int arr1[50],arr2[50],arr3[50],i,j,k,l,o,m,n;

    printf("Enter the size of 1st array:");
    scanf("%d",&m);

    for(l=0;l<m;l++){

        printf("Enter Number:");
        scanf("%d",&arr1[l]);

    }

    system("cls");

    printf("Enter the size of 2nd array:");
    scanf("%d",&n);

    for(o=0;o<n;o++){

        printf("Enter Number:");
        scanf("%d",&arr2[o]);

    }

    system("cls");


    if(m<n){
        for(i=0;i<m;i++){
            arr3[i]=arr1[i]+arr2[i];
        }

        for(j=i;j<n;j++){
            arr3[j]=arr2[j];
        }


        printf("Sum of array is:\n");

        for(k=0;k<n;k++){

            printf("%d\t",arr3[k]);

        }

    }
    else{
        for(i=0;i<n;i++){
            arr3[i]=arr1[i]+arr2[i];
        }

        for(j=i;j<m;j++){
            arr3[j]=arr1[j];
        }


        printf("Sum of array is:\n");

        for(k=0;k<m;k++){

            printf("%d\t",arr3[k]);

        }

    }

    return 0;
}
